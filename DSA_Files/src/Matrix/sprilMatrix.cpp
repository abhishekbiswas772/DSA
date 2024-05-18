#include <iostream>
#include <vector>

using namespace std;

std::vector<int> prepareForPrintMatrixAsSpril(std::vector<std::vector<int>> arr)
{
    int row = arr.size();
    int cols = arr[0].size();
    int top = 0;
    int left = 0;
    int right = cols - 1;
    int bottom = row - 1;
    std::vector<int> res;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            res.push_back(arr[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            res.push_back(arr[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                res.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                res.push_back(arr[i][left]);
            }
            left++;
        }
    }
    return res;
}

int main()
{
    std::vector<std::vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    std::vector<int> res = prepareForPrintMatrixAsSpril(arr);
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}