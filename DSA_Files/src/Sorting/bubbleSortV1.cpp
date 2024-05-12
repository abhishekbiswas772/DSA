#include <iostream>
#include <vector>


using namespace std;


void performBubbleSort(std::vector<int> arr){
    int n = arr.size();
    for(int i = 0; i < n-1; i++){
        bool isSwapped = false;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
        }
        if(!isSwapped){
            break;
        }
    }
}


int main() {
    std::vector<int> arr = {1, 4, 6, 2, 3, 5};
    performBubbleSort(arr);
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << std:: endl;
    } 
    return 0;
}