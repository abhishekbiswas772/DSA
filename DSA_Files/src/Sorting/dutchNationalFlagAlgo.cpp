#include <algorithm>
#include <iostream>


using namespace std;


void dutchNationalFlagAlgo(int *arr, int n){
    int mid = 0;
    int low = 0;
    int high = n - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            std::swap(arr[low], arr[mid]);
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
    int arr[] = {0, 2, 1, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    dutchNationalFlagAlgo(arr, n);
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}