#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;


std::vector<int> getInterSectionArray(std::vector<int> arr1, std::vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();
    std::unordered_set<int> uSet;
    std::vector<int> res;
    for(int i = 0; i < m; i++){
        uSet.insert(arr2[i]);
    }

    for(int i = 0; i < n; i++){
        if(uSet.find(arr1[i]) != uSet.end()){
            res.push_back(arr1[i]);
        }
    }
    return res;
}


int main(){
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {1, 2, 3};
    std::vector<int> res = getInterSectionArray(arr1, arr2);
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << std::endl;
    }
    return 0;
}