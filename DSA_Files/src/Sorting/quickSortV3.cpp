#include <iostream>
#include <algorithm>

using namespace std;

int performLPart(int *arr, int low, int high){
    int key = arr[high];
    int i = low - 1;
    for(int j = low; j <= high; j++){
        if(arr[j] < key){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}


void perfromQuickSort(int *arr, int low, int high){
    if(low < high){
        int p = performLPart(arr, low, high);
        perfromQuickSort(arr, low, p - 1);
        perfromQuickSort(arr, p + 1, high);
    }
}



int main(){
    int arr[] = {1, 7, 8, 9, 2, 4, 3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    perfromQuickSort(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}