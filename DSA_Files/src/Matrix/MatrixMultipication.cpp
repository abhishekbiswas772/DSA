#include <iostream>
#include <vector>

using namespace std;

std::vector<std::vector<int>> 
perfromMultipication(
    std::vector<std::vector<int>> a, std::vector<std::vector<int>> b
){
    int row1 = a.size();
    int cols1 = a[0].size();
    int row2 = b.size();
    int cols2 = b[0].size();
    std::vector<std::vector<int>> res;
    if(cols1 != row2){
        return res;
    }

    for(int i = 0; i < row1; i++){
        std::vector<int> temp;
        for(int j = 0;  j < cols2; j++){
            int sum = 0;
            for(int k = 0; k < row2; k++){
                sum += a[i][k] + b[k][j];
            }
            temp.push_back(sum);
        }
        res.push_back(temp);
    }
    return res;
}



int main(){
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
    std::vector<std::vector<int>> res = perfromMultipication(arr1, arr2);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[0].size(); j++){
            std::cout << res[i][j] << " ";
        }
        std::cout << " " << std::endl;
    }
    return 0;
}