#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;


int getLongestSubsequence(std::vector<int> arr){
    int n = arr.size();
    std::sort(arr.begin(), arr.end());
    int curr = 1;
    int res = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1] + 1){
            curr++;
        }else if(arr[i] != arr[i - 1]){
            res = std::max(res, curr);
            curr = 1;
        }
    }
    return std::max(res, curr);
}


int getLongestSubsequenceV1(std::vector<int> arr){
    int n = arr.size(); 
    std::unordered_set<int> uSet;
    for(int i = 0; i < n; i++){
        uSet.insert(arr[i]);
    }
    int res = 1;
    for(auto i : uSet){
        if(uSet.find(i - 1) == uSet.end()){
            int curr = 1;
            while(uSet.find(curr + i) != uSet.end()){
                curr++;
            }
            res = std::max(res, curr);
        }
    }
    return res;
}


int main(){
    std::vector<int> arr = {1, 3, 9, 2, 8, 2};
    int res1 = getLongestSubsequence(arr);
    int res2 = getLongestSubsequenceV1(arr);
    std::cout << res1 << std::endl;
    std::cout << res2 << std::endl;
    return 0;
}