#include <iostream>
#include <algorithm>

using namespace std;
int performLumotoPart(int *arr, int low, int high);

// This Naive Solution O(nlogn) + O(1) ~ O(nlogn) 
int getKthSmallestElementInArr(int *arr, int n, int k){
    std::sort(arr, arr+n);
    return arr[k - 1];
}

// This is good approch & its worst case its O(logn) 
// use lumoto partition algorithm
int getKthSmallestElementUsingLumotoPart(int *arr, int n, int k){
    int low = 0;
    int high = n - 1;
    while(low < high){
        int mid = performLumotoPart(arr, low, high);
        if(mid == k - 1){
            return arr[mid];
        }else if(mid > k - 1){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}


int performLumotoPart(int *arr, int low, int high){
    int key = arr[high];
    int i = low - 1;
    for(int j = low; j <= high - 1; j++){
        if(arr[j] < key){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i+1], arr[high]);
    return i + 1;
}


int main() {
    int arr[] = {10, 4, 5, 8, 11, 6, 26};
    int k = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result1 = getKthSmallestElementInArr(arr, n, k);
    int result2 = getKthSmallestElementUsingLumotoPart(arr, n, k);
    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;
    return 0;
}