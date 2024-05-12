#include <iostream>
#include <vector>

using namespace std;

void performBubbleSort(std::vector<int> &arr) {
    int n = arr.size();
    for(int i  = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j+1]){
            std::swap(arr[j] , arr[j+1]);
        }
        }
    }
}


void perfromOptmiseBubbleSort(std::vector<int> &arr){
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        bool isSwappedFound = false;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
                isSwappedFound = true;
            }
        }
        if(isSwappedFound == false){
            break;
        }
    }
}

int main() {
    std::vector<int> arr = {1, 4, 6, 2, 3, 5};
    // performBubbleSort(arr);
    perfromOptmiseBubbleSort(arr);
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << std:: endl;
    } 
    return 0;
}