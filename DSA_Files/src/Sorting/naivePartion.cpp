#include <iostream>

using namespace std;


void performNaivePartion(int *arr, int low, int high, int key){
    int tmp[high - low + 1];
    int index = 0;
    for(int i = low; i <= high; i++){
        if(arr[i] <= arr[key]){
            tmp[index] = arr[i];
            index++;
        }
    }

    for(int i = low; i <= high; i++){
        if(arr[i] > arr[key]){
            tmp[index] = arr[i];
            index++;
        }
    }

    for(int i = low; i <= high; i++){
        arr[i] = tmp[i - low];
    }
}

int main(){
    int arr[] = {5, 13, 6, 9, 12, 11, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int p = 6;
    performNaivePartion(arr, 0, n-1, p);
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}