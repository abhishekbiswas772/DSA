#include<iostream>
#include<vector>
#include<algorithm>



using namespace std;


int performHoarePartition(int *arr, int n){
    int low = 0;
    int key = arr[low];
    int high = n - 1;
    int i = low - 1;
    int j = high + 1;    
    while(true){
        do{
            i++;
        }while(arr[i] < key);
        do{
            j--;
        }while(arr[j] > key);
        if(i >= j){
            return j;
        }
        std::swap(arr[i], arr[j]);
    }
}




int main(){
    int arr[] = {10, 80, 30, 5, 40, 50, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = performHoarePartition(arr, n);
    std::cout << result << std::endl;
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl; 
    return 0;
}	
