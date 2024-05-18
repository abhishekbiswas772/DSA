#include <iostream>
#include <vector>

using namespace std;

void rotateby90(vector<vector<int>>& arr, int n) 
{ 
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            std::swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i = 0; i < n; i++){
        int low = 0;
        int high = n - 1;
        while(low < high){
            std::swap(arr[low][i], arr[high][i]);
            low++;
            high--;
        }
    }
} 


int main() {
    std::vector<std::vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    rotateby90(arr, arr.size());
    return 0;
}







