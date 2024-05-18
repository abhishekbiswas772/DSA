#include <iostream>
#include <vector>

using namespace std;

std::pair<int, int> performSearchInMatrix(const std::vector<std::vector<int>>& arr, int x) {
    int row = arr.size();
    if (row == 0) return {-1, -1}; 
    int cols = arr[0].size();
    if (cols == 0) return {-1, -1}; 

    std::pair<int, int> indexPair = {-1, -1};  

    int i = 0;
    int j = cols - 1;

    while (i < row && j >= 0) {
        if (arr[i][j] == x) {
            indexPair.first = i;
            indexPair.second = j;
            return indexPair;
        } else if (arr[i][j] > x) {
            j--;
        } else {
            i++;
        }
    }
    return indexPair;  
}

int main() {
    std::vector<std::vector<int>> arr = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    int x = 29;
    std::pair<int, int> result = performSearchInMatrix(arr, x);
    if (result.first == -1 && result.second == -1) {
        std::cout << "Search element " << x << " not found" << std::endl;
    } else {
        std::cout << "Search element " << x << " is found at index " << result.first << ", " << result.second << std::endl;
    }
    return 0;
}
