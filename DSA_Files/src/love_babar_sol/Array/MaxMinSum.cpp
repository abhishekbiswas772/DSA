#include <iostream>
#include <vector>

using namespace std;

int getCurrentMax(std::vector<int> arr){
    int idx = 0;

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > arr[idx]){
            idx = i;
        }
    }
    return arr[idx];
}


int getCurrentMin(std::vector<int> arr){
    int idx = 0;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[idx]){
            idx = i;
        }
    }
    return arr[idx];
}



int main(){
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int maxElement = getCurrentMax(arr);
    int minElement = getCurrentMin(arr);
    std::cout << maxElement << std::endl;
    std::cout << minElement << std::endl;
    int sum = maxElement + minElement;
    std::cout << sum << std::endl;
    return 0;
}
