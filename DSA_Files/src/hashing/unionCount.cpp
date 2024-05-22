#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

int getUnionCount(std::vector<int> arr1, std::vector<int> arr2){
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

int main(){
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {1, 2, 3};
    int count = getUnionCount(arr1, arr2);
    return 0;
}