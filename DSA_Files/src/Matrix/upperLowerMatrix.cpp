#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


std::vector<int> getSumOfLowerAndUpperMatrix(std::vector<std::vector<int>> arr){
    int lower = 0;
    int upper = 0;
    int row = arr.size();
    std::vector<int> res;
    int cols = arr[0].size();
    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            if(i <= j){
                upper += arr[i][j];
            }

            if(j <= i){
                lower += arr[i][j];
            }
        }
    }
    res.push_back(upper);
    res.push_back(lower);
    return res;
}


int main(){
    std::vector<std::vector<int>> arr = {
        {1, 2, 3, 4,},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    std::vector<int> res =getSumOfLowerAndUpperMatrix(arr);
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << std::endl;
    }
    return 0;
}