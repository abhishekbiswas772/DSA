#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


int perfromLumotoPartion(std::vector<int> arr, int low, int high){
    int i = low - 1;
    int key = arr[high];
    for(int j = low; j <= high-1; j++){
        if(arr[i] < key){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

int getSmallestElementBelowK(std::vector<int> arr, int low, int high, int k){
    while(low <= high){
        int mid = perfromLumotoPartion(arr, low, high);
        if(mid == k - 1){
            return arr[mid];
        }else if(mid > k - 1){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}


int main(){
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;
    int low = 0;
    int high = arr.size();
    int res = getSmallestElementBelowK(arr, low, high, k);
    std::cout << res << std::endl;
    return 0;
}