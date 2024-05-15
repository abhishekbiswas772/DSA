#include <iostream>
#include <vector>

using namespace std;

void makeBoundaryTarverseArray(std::vector<std::vector<int>>arr){
    int cols = arr[0].size();
    int row = arr.size();
    if (row == 1){
        for(int i = 0; i < cols; i++){
            std::cout << arr[0][i] << " ";
        }
        std::cout << " " << std::endl;
    }else if (cols == 1){
        for(int  i = 0; i < row; i++){
            std::cout << arr[i][0] << " ";
        }
        std::cout << " " << std::endl;
    }else {
        for(int i = 0; i < cols; i++){
            std::cout << arr[0][i] << " ";
        }
        // std::cout << " " << std::endl;
        for(int i = 1; i < row ; i++){
            std::cout << arr[i][cols - 1] << " ";
        }
        // std::cout << " " << std::endl;
        for(int i = cols - 2; i >= 0; i--){
            std::cout << arr[row - 1][i] << " ";
        }
        // std::cout << " " << std::endl;
        for(int i = row - 2; i >= 1; i--){
            std::cout << arr[i][0] << " ";
        }
    // std::cout << " " << std::endl;
    }
}



int main() {
    std::vector<std::vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    makeBoundaryTarverseArray(arr);
    return 0;
}