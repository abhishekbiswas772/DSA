#include <vector>
#include <iostream>

using namespace std;




vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
{
    // code here
    int left = 0;
    int right = c - 1;
    int top = 0;
    int bottom = r - 1;
    vector<int> res;

    while (left <= right && top <= bottom)
    {
        for (int i = top; i <= right; i++)
        {
            res.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            res.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                res.push_back(matrix[i][left]);
            }

            left++;
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
    std::vector<int> res = spirallyTraverse(arr, arr.size(), arr[0].size());
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}