#include <iostream>
#include <vector>

using namespace std;

void getBooleanMatrix(std::vector<std::vector<int>> &arr){
    int row = arr.size();
    int cols = arr[0].size();
    int cols1 = 0;
    for(int i = 0; i < row; i++){
        if(arr[i][0] == 1){
            cols1 = 1;
        }
        for(int j = 1; j < cols; j++){
            if(arr[i][j] == 1){
                arr[i][0] = 1;
                arr[0][j] = 1;
            }
        }
    }

    for(int i = row - 1; i >= 0; i--){
        for(int j = cols - 1; j >= 1; j--){
            if(arr[i][0] == 1 || arr[0][j] == 1){
                arr[i][j] = 1;
            }
        }
        if(cols1 == 1){
            arr[i][0] = 1;
        }
    }
}



int main(){
    std::vector<std::vector<int>> arr = {
        {1, 0},
        {0, 0}
    };
    getBooleanMatrix(arr);
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[0].size(); j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << " " << std::endl;
    }
    return 0;
}