#include <iostream>
#include <vector>

using namespace std;



int getCountInversionV1(int *arr, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= 0; j--){
            if(i < j && arr[i] > arr[j]){
                count++;
            }
        }
    }
    return count;
}



int getCountInversionGFGV1(int *arr, int n){
    int count = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n-1; j++){
            if(arr[i] > arr[j]){
                count++;
            }
        }
    }
    return count;
}



int getCountInvViaMergeFuncOps(int *arr, int low, int high, int mid){
    int n1 = mid - low  + 1;
    int n2 = high - mid;
    int left[n1];
    int right[n2];
    for(int i = 0; i < n1; i++){
        left[i] = arr[low + i];
    }
    for(int i = 0; i < n2; i++){
        right[i] = arr[mid + i + 1];
    }
    int res = 0;
    int i = 0;
    int j = 0;
    int k = low;
    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }else {
            arr[k] = right[j];
            j++;
            res += (n1 - i);
        }
        k++;
    }
    
    while(i < n1){
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = right[j];
        j++;
        k++;
    }
    return res;
}


int getCountInversion(int *arr, int low, int high){
    int res = 0;
    if(low < high){
        int mid = low + (high - low)/2;
        res += getCountInversion(arr, low, mid);
        res += getCountInversion(arr, mid + 1, high);
        res += getCountInvViaMergeFuncOps(arr, low, high, mid);
    }
    return res;
}







int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = getCountInversion(arr, 0, n-1);
    std::cout << count << std::endl;
    return 0;
}