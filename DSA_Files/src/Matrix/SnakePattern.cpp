#include <iostream>
#include <vector>

using namespace std;

std::vector<int> performSnakePrintMatrix(std::vector<std::vector<int>> arr) {
    int row = arr.size();
    int cols = arr[0].size();
    std::vector<int> res;
    for(int i = 0; i < row; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < cols; j++) {
                res.push_back(arr[i][j]);
            }
        } else {
            for(int j = cols - 1; j >= 0; j--) {
                res.push_back(arr[i][j]);
            }
        }
    }
    return res;
}

int main() {
    std::vector<std::vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    std::vector<int> res = performSnakePrintMatrix(arr);
    for(int val : res) {
        std::cout << val << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}
