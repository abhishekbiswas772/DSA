#include <iostream>
#include <vector>
#include <algorithm>


std::vector<int> performUnionV1(int *arr1, int *arr2, int n1, int n2){
    std::vector<int> res;
    std::vector<int> result;
    for(int i = 0; i < n1; i++){
        res.push_back(arr1[i]);
    }
    for(int i = 0; i < n2; i++){
        res.push_back(arr2[i]);
    }
    std::sort(res.begin(), res.end());
    for(int i = 0; i < res.size(); i++){
        if(i == 0 || res[i] != res[i - 1]){
            result.push_back(res[i]);
        }
    }
    return result;
}


std::vector<int> performUnionArray(int *arr1, int *arr2, int n1, int n2){
    std::vector<int> result;
    int i = 0; 
    int j = 0;
    while(i < n1 && j < n2){
        if(i > 0 && arr1[i] == arr1[i - 1]){
            i++;
            continue;
        }

        if(j > 0 && arr2[j] == arr2[j - 1]){
            j++;
            continue;
        }
        if(arr1[i] < arr2[j]){
            result.push_back(arr1[i]);
            i++;
        }else if(arr1[i] > arr2[j]){
            result.push_back(arr2[j]);
            j++;
        }else if(arr1[i] == arr2[j]){
            result.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i < n1){
        if(i > 0 && arr1[i] != arr1[i - 1]){
            result.push_back(arr1[i]);
            i++;
        }
    }

    while(j < n2){
        if(j > 0 && arr2[j] != arr2[j - 1]){
            result.push_back(arr2[j]);
            j++;
        }
    }
    return result;
}



int main() {
    int arr1[] = {10, 20, 20, 40, 60};
    int arr2[] = {2, 20, 20, 20};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    std::vector<int> res = performUnionArray(arr1, arr2, n1, n2);
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << std::endl;
    }
    std::cout << "" << std::endl;
    return 0;
}