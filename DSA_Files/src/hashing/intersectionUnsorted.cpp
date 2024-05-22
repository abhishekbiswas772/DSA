#include <iostream>
#include <vector>
#include <unordered_set>



using namespace std;



std::vector<int> getInterSectionInUnsortedArray(std::vector<int> arr1 , std::vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();
    std::vector<int> result;
    std::unordered_set<int> uSet;
    for(int j = 0; j < n; j++){
        uSet.insert(arr2[j]);
    }
    for(int i = 0; i < n; i++){
        if(uSet.find(arr1[i]) != uSet.end()){
            result.push_back(arr1[i]);
        }
    }
    return result;
}

std::vector<int> getIntersectionUsingNaive(std::vector<int> arr1, std::vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();
    std::vector<int> res;
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < m; j++){
            if(arr1[i] == arr2[j]){
                flag = true;
                break;
            }
        }
        if(flag){
            res.push_back(arr1[i]);
        }
    }
    return res;
}



int main(){
    std::vector<int> arr1 = {10, 15, 20, 25, 30, 50};
    std::vector<int> arr2 = {30, 5, 15, 80};
    std::vector<int> result = getInterSectionInUnsortedArray(arr1, arr2);
    std::vector<int> result2 = getIntersectionUsingNaive(arr1, arr2);
    for(int i = 0; i < result.size(); i++){
        std::cout << result[i] << " ";
    }
    std::cout << " "  << std::endl;
    for(int i = 0; i < result2.size(); i++){
        std::cout << result2[i] << " ";
    }
    std::cout << " "  << std::endl;
    return 0;
}