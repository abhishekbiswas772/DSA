#include <iostream>
#include <vector>


using namespace std;


void performInserationSort(std::vector<int> &arr){
    int n = arr.size();
    for(int i = 1; i < n - 1; i++){
        int swapKey = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > swapKey){
            arr[j + 1] = arr[j]; 
            j--;
        }
        arr[j + 1] = swapKey;
    }
}


int main() {
    std::vector<int> arr = {1, 4, 6, 2, 3, 5};
    performInserationSort(arr);
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << std:: endl;
    } 
    return 0;
}