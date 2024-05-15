#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void getTransposeOfMatrixV1(std::vector<std::vector<int>> arr){
    int cols = arr[0].size();
    int row = arr.size();
    std::vector<std::vector<int>> tmp;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            tmp[i][j] = arr[j][i];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            arr[i][j] = arr[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            std::cout << arr[i][j] << std::endl;
        }
    }
}


void getTransposeOfMatrix(std::vector<std::vector<int>> arr){
    int cols = arr[0].size();
    int row = arr.size();
    for(int i = 0; i < row; i++){
        for(int j = i + 1; j < cols; j++){
            std::swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << " " << std::endl;
    }
}

int main(){
    std::vector<std::vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    getTransposeOfMatrix(arr);
    return 0;
}