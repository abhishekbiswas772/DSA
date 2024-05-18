#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


void transposeMatrix(std::vector<std::vector<int>> &arr)
{
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr[0].size(); j++){
            std::swap(arr[i][j], arr[j][i]);
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
    transposeMatrix(arr);
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr[0].size(); j++){
            std::cout << arr[i][j] << " ";
        }
    }
    std::cout << " " << std::endl;
    return 0;
}