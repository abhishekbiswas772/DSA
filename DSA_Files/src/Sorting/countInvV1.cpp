#include <iostream>
#include <vector>


using namespace std;

long long 
performMergeFunc(
    long long *arr, long long *temp, long long low, long long high, long long mid
){
    long long i = low;
    long long j = mid;
    long long k = low;
    long long countInv = 0;
    while(i <= mid - 1 && j <= high){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }else {
            temp[k] = arr[j];
            j++;
            k++;
            countInv += (mid - i);
        }
    }

    while( i <= mid - 1){
        temp[k] = arr[i];
        k++;
        i++;
    }

    while( j <= high ){
        temp[k] = arr[j];
        k++;
        j++;
    }

    for(int i = low;  i <= high; i++){
        arr[i] = temp[i];
    }
    return countInv;
}


long long 
getCountInv(
    long long* arr, long long *temp, long long low, long long high
){
    long long res = 0;
    if(low < high){
        int mid = low + (high - low)/2;
        res += getCountInv(arr, temp, 0, mid);
        res += getCountInv(arr, temp, mid + 1, high);
        res += performMergeFunc(arr, temp, low, high, mid);
    }
    return res;
}



int main() {
    long long arr[] = {2, 4, 1, 3, 5};
    long long n = sizeof(arr)/sizeof(arr[0]);
    long long temp[n];
    long long count = getCountInv(arr, temp, 0, n-1);
    std::cout << count << std::endl;
    return 0;
}