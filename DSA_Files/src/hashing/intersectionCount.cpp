#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

int getIntersectionCount(std::vector<int> arr1, std::vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();
    std::unordered_set<int>uSet;
    for(int i = 0; i < n; i++){
        uSet.insert(arr1[i]);
    }
    int count = 0;
    for(int i = 0; i < m; i++){
        if(uSet.find(arr2[i]) != uSet.end()){
            count += 1;
            uSet.erase(arr2[i]);
        }
    }
    return count;
}

int main(){
    std::vector<int> arr1 = {89, 24, 75, 11, 23};
    std::vector<int> arr2 = {89, 2, 4}; 
    int count = getIntersectionCount(arr1, arr2);
    std::cout << count << std::endl;
    return 0;
}