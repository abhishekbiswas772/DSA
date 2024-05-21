#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>


using namespace std;


int unionArray(std::vector<int> arr1, std::vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();
    std::unordered_set<int> uSet;
    for(int i = 0; i < n; i++){
        uSet.insert(arr1[i]);
    }
    for(int i = 0; i < m; i++){
        uSet.insert(arr2[i]);
    }
    return uSet.size();
}


int unionArrayV1(std::vector<int> arr1, std::vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();
    std::vector<int> res;
    int count = 0;
    for(int i = 0; i < arr1.size(); i++){
        if(std::find(res.begin(), res.end(), arr1[i]) == res.end()){
            res.push_back(arr1[i]);
            count++;
        }
    }
    for(int j = 0; j < arr2.size(); j++){
        if(std::find(res.begin(), res.end(), arr2[j]) == res.end()){
            res.push_back(arr2[j]);
            count++;
        }
    }

    return count;
}


int main(){
    std::vector<int> arr1 = {15, 20, 5, 15};
    std::vector<int> arr2 = {15, 15, 15, 20, 10};
    int res = unionArray(arr1, arr2);
    int res2 = unionArrayV1(arr1, arr2);
    std::cout << res << std::endl;
    std::cout << res2 << std::endl;
    return 0;
}