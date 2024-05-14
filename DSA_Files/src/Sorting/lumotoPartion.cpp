#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int performLomutoPartition(int *arr, int n){
    int low = 0;
    int high = n - 1;
    int key = arr[high];
    int i = low - 1;
    for(int j = low; j <= high - 1; j++){
        if(arr[j] < key){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i+1], arr[high]);
    return i+1;
}

int main(){
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = performLomutoPartition(arr, n);
    std::cout << result << std::endl;
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl; 
    return 0;
}
