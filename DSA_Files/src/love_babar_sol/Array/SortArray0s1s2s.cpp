#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

// use dutch national flag algorithm
void perfromDutchNationalFlagAlgo(std::vector<int> &arr){
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while(mid <= high){
        if(arr[low] == 0){
            std::swap(arr[mid], arr[low]);
            low++;
            mid++;
        }else if(arr[low] == 1){
            mid++;
        }else{
            std::swap(arr[mid], arr[high]);
            high--;
        }
    }
}



int main(){
    std::vector<int> arr= {0, 2, 1, 2, 0};
    perfromDutchNationalFlagAlgo(arr);
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}