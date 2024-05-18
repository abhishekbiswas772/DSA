#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

void getExchangeCols(std::vector<std::vector<int>> &arr){
    int row = arr.size();
    int cols = arr[0].size();
    for(int i = 0; i < row; i++){
        std::swap(arr[i][0], arr[i][cols - 1]);
    }
}


int main(){
    std::vector<std::vector<int>> arr= {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    getExchangeCols(arr);
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[0].size(); j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << " " << std::endl;
    }
    return 0;
}