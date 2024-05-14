#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

// use divide and concer problem 
int performLumotoPartion(int *arr, int low, int high){
    int key = arr[high];
    int i = low - 1;
    for(int j = low; j <= high - 1; j++){
        if(arr[j] < key){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}


void performQuickSort(int *arr, int low, int high){
    if(low < high){
        int prob = performLumotoPartion(arr, low, high);
        performQuickSort(arr, low, prob - 1);
        performQuickSort(arr, prob + 1, high);
    }
}

int getMinimumDifferenceArray(int *arr, int n){
    performQuickSort(arr, 0, n-1);
    // use can use introsort algo
    // hybrid sorting algo
    // std::sort(arr, arr+n)
    // what is fun on that????
    int res = std::numeric_limits<int>::max();
    for(int i = 1; i < n; i++){
        res = std::min(res, std::abs(arr[i] - arr[i-1]));
    }
    return res;
}



int getMinimumDiffArrayNaive(int *arr, int n){
    int res = std::numeric_limits<int>::max();
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            res = std::min(res, std::abs(arr[j] - arr[i]));
        }
    }
    return res;
}


int main(){
    int arr[] = {10, 8, 1, 4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int res1 = getMinimumDiffArrayNaive(arr, n);
    int res2 = getMinimumDifferenceArray(arr, n);
    std::cout << res1 << std::endl;
    std::cout << res2 << std::endl;
    return 0;
}