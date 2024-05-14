#include <iostream>
#include <algorithm>

using namespace std;


int getPartL(int *arr, int low, int high){
    int key = arr[high];
    int i = low - 1;
    for(int j = 0; j <= high - 1; j++){
        if(arr[i] < key){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void perfromQuickSort(int *arr, int low, int high){
    if(low < high){
        int p = getPartL(arr, low, high);
        perfromQuickSort(arr, low, p - 1);
        perfromQuickSort(arr, p + 1, high);
    }
}

bool getPairSum(int *arr, int low, int high, int x){
    while(low <= high){
        int sum = arr[low] + arr[high];
        if(sum == x){
            return true;
        }else if (sum > x){
            high -= 1;
        }else{
            low += 1;
        }
    }
    return false;
}


bool getTriplet(int *arr, int n, int x){
    for(int i = 0; i < n-2; i++){
        int low = i + 1;
        int high = n;
        int rSum = x - arr[i];
        if(getPairSum(arr, low, high, rSum)){
            return true;
        }
    }
    return false;
}


int main() {
    int arr[] = {1, 4, 45, 6, 10, 8};
    int x = 13;
    int n = sizeof(arr)/sizeof(arr[0]);
    bool result = getTriplet(arr, n, x);
    if(result){
        std::cout << "Triplet Found!!" << std::endl;
    }else{
        std::cout << "Triplet Not Found!!" << std::endl;
    }
    return 0;
}