#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;



void interchangeCols(std::vector<std::vector<int>> arr){
    int row = arr.size();
    int cols = arr[0].size();
    for(int i= 0; i < row; i++){
        int low = 0;
        int high = cols - 1;
        while(low < high){
            std::swap(arr[i][low], arr[i][high]);
            low++;
            high--;
        }
    }
}

int main(){
    std::vector<std::vector<int>> arr = {
        {1, 2, 3, 4},
        {4, 5, 6, 7},
        {8, 9, 10, 11},
        {12, 13, 14, 15}
    };
    interchangeCols(arr);
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[0].size(); j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << " " << std::endl;
    }
}