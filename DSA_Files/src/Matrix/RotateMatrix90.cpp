#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void getRotateMatrix90DegreeV1(std::vector<std::vector<int>> arr){
    int row = arr.size();
    int cols = arr[0].size();
    std::vector<std::vector<int>> temp;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            temp[cols - j - 1][i] = arr[i][j];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < row; j++){
            arr[i][j] = temp[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << " " << std::endl;
    }
}



void getRotateMatrix90Degree(std::vector<std::vector<int>> arr){
    int row = arr.size();
    int cols = arr[0].size();
    for(int i = 0; i < row; i++){
        for(int j = i + 1; j < row; j++){
            std::swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i = 0; i < row; i++){
        int low = 0;
        int high = row - 1;
        while(low < high){
            std::swap(arr[low][i], arr[high][i]);
            i++;
            high--;
        }
    }


    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << " " << std::endl;
    }
}


int main() {
    std::vector<std::vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    getRotateMatrix90Degree(arr);
    return 0;
}