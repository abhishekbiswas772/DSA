#include <iostream>
#include <algorithm>

using namespace std;

// Dutch National Flag Algo
void getSortThreeElementArray(int *arr, int n){
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            std::swap(arr[mid], arr[low]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else if(arr[mid] == 2){
            std::swap(arr[mid], arr[high]);
            high--;
        }
    }    
}

int main() {
    int arr[] = {0, 1, 0, 2, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    getSortThreeElementArray(arr, n);
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "" << std::endl;
    return 0;
}