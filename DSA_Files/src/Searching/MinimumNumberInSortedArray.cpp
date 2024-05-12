#include <iostream>
#include <vector>

int getMinimumElementInRotatedArray(std::vector<int> arr){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int ans = 1e9;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == arr[low] && arr[mid] == arr[high]){
            ans = std::min(ans, arr[mid]);
            low++;
            high--;
        }else if (arr[mid] > arr[high]){
            low = mid + 1;
        }else{
            ans = std::min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

// this solution is the best of best 
int getMinElementV1(std::vector<int> arr){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] > arr[high]){
            low = mid + 1;
        }else {
            high = mid;
        }
    }
    return arr[low];
}

int main() {
    std::vector<int> arr = {5, 6, 1, 2, 3, 4};
    int result = getMinimumElementInRotatedArray(arr);
    std::cout << result << std::endl;
    return 0;
}