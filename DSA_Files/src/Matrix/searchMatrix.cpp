#include <iostream>
#include <vector>


using namespace std;

bool searchMatrix(std::vector<std::vector<int>> arr, int x){
    int row = arr.size();
    int cols = arr[0].size();
    int i = 0;
    int j = cols - 1;
    while(i < row && j >= 0){
        if(arr[i][j] == x){
            return true;
        }else if(arr[i][j] > x){
            j--;
        }else{
            i++;
        }
    }
    return true;
}

int main(){
    std::vector<std::vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int x = 12;
    bool res = searchMatrix(arr, x);
    std::cout << res << std::endl;
    return 0;
}