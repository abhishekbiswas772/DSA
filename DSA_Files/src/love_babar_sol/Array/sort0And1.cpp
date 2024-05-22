#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void sort0And1(std::vector<int> &arr)
{
    int n = arr.size();
    int i = -1;
    int j = n;
    do
    {
        i++;
    } while (arr[i] < 0);
    do
    {
        j--;
    } while (arr[j] >= 0);
    if (i >= j)
    {
        return;
    }
    std::swap(arr[i], arr[j]);
}

void reArrange(std::vector<int> &arr)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
        }
    }
}

int main()
{
    std::vector<int> arr = {1, 2, -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2, 1};
    // sort0And1(arr);
    reArrange(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}