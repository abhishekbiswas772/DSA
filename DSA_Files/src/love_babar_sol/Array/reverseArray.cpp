#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



void reverseArray(std::vector<int> &arr){
    int low = 0;
    int high = arr.size() - 1;
    while(low < high){
        std::swap(arr[low], arr[high]);
        low += 1;
        high -= 1;
    }
}


int main(){
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    reverseArray(arr);
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}