#include <iostream>
#include <vector>

using namespace std;

std::vector<int> performMergeInTwoArray(std::vector<int> arr1, std::vector<int> arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;
    std::vector<int> res;
    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            res.push_back(arr1[i]);
            i++;
        }else {
            res.push_back(arr2[j]);
            j++;
        }
    }

    while(i < n1){
        res.push_back(arr1[i]);
        i++;
    }
    while(j < n2){
        res.push_back(arr2[j]);
        j++;
    }
    return res;
}


int main() {
    std::vector<int> arr1 = {10, 15, 20};
    std::vector<int> arr2 = {5, 6, 6, 15};
    std::vector<int> res = performMergeInTwoArray(arr1, arr2);
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << " ";
    }
    std::cout << "" << std::endl;
    return 0;
}
