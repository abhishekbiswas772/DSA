#include <iostream>
#include <vector>



using namespace std;


void cycleRotateByOne(std::vector<int> &arr){
    int n = arr.size();
    int temp = arr[n - 1];
    for(int i = n - 1; i >= 1; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}


int main(){
    std::vector<int> arr = {1, 2, 3, 4, 5};
    cycleRotateByOne(arr);
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}