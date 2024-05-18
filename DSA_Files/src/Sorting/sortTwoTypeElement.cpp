#include <iostream>
#include <algorithm>

using namespace std;



void sortTwoTypeElement(int *arr, int n){
    int i = -1;
    int j = n;
    while(true){
        do{
            i++;
        }while(arr[i] < 0);
        do{
            j--;
        }while(arr[j] >= 0);

        if(i >= j){
            return;
        }
        std::swap(arr[i], arr[j]);
    }

}


void sortTwoTypeElementEff(int *arr, int n){
    int temp[n];
    int index = 0;
    for(int j = 0; j < n; j++){
        if(arr[j] < 0){
            temp[index] = arr[j];
            index++;
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i = 0; i < n; i++){
        arr[i] = temp[i];
    }
}


int main() {
    int arr[] = {13, -12, 18, -10};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortTwoTypeElement(arr, n);
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}