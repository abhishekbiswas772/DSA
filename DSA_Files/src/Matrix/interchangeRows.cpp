#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void peformInterchangeRow(std::vector<std::vector<int>> &arr){
    int row = arr.size();
    int cols = arr[0].size();
    for(int i = 0; i < cols; i++){
        int low = 0;
        int high = row - 1;
        while(low < high){
            std::swap(arr[low][i], arr[high][i]);
            low++;
            high--;
        }
    }
}

int main(){
    std::vector<std::vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    peformInterchangeRow(arr);
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[0].size(); j++){
            std::cout << arr[i][j] << std::endl;
        }
        std::cout << " " << std::endl;
    }
    return 0;
}