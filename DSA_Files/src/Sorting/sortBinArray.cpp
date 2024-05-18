#include <iostream>
#include <algorithm>


using namespace std;


void sortBinArray(int *arr, int n){
    int i = -1;
    int j = n;
    while(true){
        do{
            i++;
        }while(arr[i] <= 0 && i < n - 1);
        do{
            j--;
        }while(arr[j] > 0 && j > 0);
        if(i >= j){
            return ;
        }
        std::swap(arr[i], arr[j]);
    }
}


int main(){
    int arr[] = {1, 0, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortBinArray(arr, n);
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}