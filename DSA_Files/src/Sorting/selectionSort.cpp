#include <iostream>
#include <vector>
#include <limits>


using namespace std;

void performSelectionSortUsingExtraSpace(std::vector<int> &arr){
    int n = arr.size();
    std::vector<int> tempArray;
    for(int i = 0; i < n; i++){
        int currentMinIdx = 0;
        for(int j = 1; j < n; j++){
            if(arr[j] < arr[currentMinIdx]){
                currentMinIdx = j;
            }
        }
        tempArray.push_back(arr[currentMinIdx]);
        arr[currentMinIdx] = std::numeric_limits<int>::max();
    }

    for(int i = 0; i < arr.size(); i++){
        arr[i] = tempArray[i];
    }
}



void performSelectionSortWithOutUsingExtraSpace(std::vector<int> &arr){
    int n = arr.size();
    for(int i = 0; i < n-1; i++){
        int current_min = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[current_min]){
                current_min = j;
            }
        }
        std::swap(arr[current_min], arr[i]);
    }
}




int main() {
    std::vector<int> arr = {1, 4, 6, 2, 3, 5};
    performSelectionSortUsingExtraSpace(arr);
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << std:: endl;
    } 
    std::cout << "EFF" << std::endl;
    arr = {1, 4, 6, 2, 3, 5};
    performSelectionSortWithOutUsingExtraSpace(arr);
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << std:: endl;
    } 
    return 0;
}