#include <iostream>
#include <vector>

std::vector<int> performInterSection(int *arr1, int *arr2, int n1, int n2){
    std::vector<int> res;
    int i = 0;
    int j = 0;
    while(i < n1 && j < n2){
        if(i > 0 && arr1[i] == arr1[i - 1]){
            i++;
            continue;
        }
        if(arr1[i] < arr2[j]){
            i++;
        }else if(arr1[i] > arr2[j]){
            j++;
        }else if (arr1[i] == arr2[j]){
            res.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return res;
}



std::vector<int> performIntersectionArray(int *arr1, int *arr2, int n1, int n2){
    std::vector<int> res;
    for(int i = 0; i < n1; i++){
        if(i > 0 && arr1[i] == arr1[i -1]){
            continue;
        }
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j]){
                res.push_back(arr1[i]);
                break;
            }
        }
    }
    return res;
}

int main() {
    int arr1[] = {10, 20, 20, 40, 60};
    int arr2[] = {2, 20, 20, 20};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    std::vector<int> res = performInterSection(arr1, arr2, n1, n2);
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << std::endl;
    }
    std::cout << "" << std::endl;
    return 0;
}