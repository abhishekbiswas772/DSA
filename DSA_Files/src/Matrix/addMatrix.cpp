#include <vector>
#include <iostream>


using namespace std;


std::vector<std::vector<int>> 
perfromAddOperation(
    std::vector<std::vector<int>> arr1, std::vector<std::vector<int>> arr2
){
    int row = arr1.size();
    // int row2 = arr2.size();
    int cols = arr1[0].size();
    // int col2 = arr2[0].size();
    std::vector<std::vector<int>> res;
    for(int i = 0; i < row; i++){
        std::vector<int> temp;
        for(int j = 0; j < cols; j++){
            int res = arr1[i][j] + arr2[i][j];
            temp.push_back(res);
        }
        res.push_back(temp);
    }
    return res;
}



int main() {
    std::vector<std::vector<int>> arr1 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    std::vector<std::vector<int>> arr2 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    std::vector<std::vector<int>> res = perfromAddOperation(arr1, arr2);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[0].size(); j++){
            std::cout << res[i][j] << " ";
        }
        std::cout << " " << std::endl;
    }
    return 0;
}