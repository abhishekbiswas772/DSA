#include <iostream>
#include <vector>

using namespace std;

void performMergeOperation(int *arr, int low, int high, int mid){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1];
    int right[n2];
    for(int i = 0; i < n1; i++){
        left[i] = arr[i + low];
    }
    for(int i = 0; i < n2; i++){
        right[i] = arr[mid + i + 1];
    }

    int k = low;
    int i = 0;
    int j = 0;
    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            k++;
            i++;
        }else{
            arr[k] = right[j];
            k++;
            j++;
        }
    }

    while(i < n1){
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = right[j];
        j++;
        k++;
    }

}


void performMergeSort(int *arr, int low, int high){
    if(low < high){
        int mid = low + (high - low)/2; 
        performMergeSort(arr, low, mid);
        performMergeSort(arr, mid + 1, high);
        performMergeOperation(arr, low, high, mid);
    }
}



int main() {
    int arr[] = {5, 7, 10, 15, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    performMergeSort(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}