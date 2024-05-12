#include <iostream>
#include <unordered_map>
#include <vector>


using namespace std;

int getCountMoreThanNKOccurences(std::vector<int> arr, int k){
    int n = arr.size();
    std::unordered_map<int, int> freq;
    std::vector<int> result;
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }
    for(auto i : freq){
        if(i.second > n/k){
            result.push_back(i.first);
        }
    }
    return result.size();
}


int main() {
    std::vector<int> arr = {3,1,2,2,1,2,3,3};
    int k = 4;
    int res = getCountMoreThanNKOccurences(arr, k);
    std::cout << res << std::endl;
    return 0;
}