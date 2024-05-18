#include <iostream>
#include <vector>

using namespace std;

void getBooleanMatrix(std::vector<std::vector<int>> &arr){
    int row = arr.size();
    int cols = arr[0].size();

    for(int  i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == 1){
                
            }
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