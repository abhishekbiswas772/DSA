#include <iostream>
#include <algorithm>


using namespace std;

int perfromHoarePart(int *arr, int low, int high){
    int key = arr[low];
    int i = low - 1;
    int j = high + 1;
    while(true){
        do{
            i++;
        }while(arr[i] < key);

        do{
            j--;
        }while(arr[j] > key);
        if(i >= j){
            return j;
        }
        std::swap(arr[i], arr[j]);
    }
}


void perfromQuickShort(int *arr, int low, int high){
    if(low < high){
        int mid = perfromHoarePart(arr, low, high);
        std::cout << mid << std::endl;
        perfromQuickShort(arr, low, mid);
        perfromQuickShort(arr, mid + 1, high);
    }
}


int main(){
    int arr[] = {8, 4, 7, 9, 3, 10, 5}; // 3, 4, 5, 7, 8, 9, 10
    int n = sizeof(arr)/sizeof(arr[0]);
    perfromQuickShort(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}