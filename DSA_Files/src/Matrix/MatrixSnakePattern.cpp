#include <iostream>
#include <vector>

using namespace std;

void makePrintMatrixAsSnake(std::vector<std::vector<int>> arr){
    int cols = arr[0].size();
    int row = arr.size();
    for(int i = 0;  i < row; i++){
        if(i % 2 == 0){
            for(int j = 0; j < cols; j++){
                std::cout << arr[i][j] << " ";
            }
            continue;
        }else{
            for(int j = cols - 1; j >= 0; j--){
                std::cout << arr[i][j] << " ";
            }
        }
    }
    std::cout << " " << std::endl;
}


int main(){
    std::vector<std::vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    makePrintMatrixAsSnake(arr);
    return 0;
}