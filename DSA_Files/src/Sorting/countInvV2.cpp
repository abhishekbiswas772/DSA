#include <iostream>
#include <vector>

using namespace std;


// Use Divide And Concer ALgo
long long perfromMerge(
    long long *arr, std::vector<long long> temp, long long low, long long high, long long mid
){
    long long res = 0;
    long long i = low;
    long long j = mid;
    long long k = low;
    while(i <= mid - 1 && j <= high){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }else{
            temp[k] = arr[j];
            j++;
            k++;
            res += (mid - i);
        }
    }

    while(i <= mid - 1){
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= high){
        temp[k] = arr[j];
        j++;
        k++;
    }
    for(int i = low; i <= high; i++){
        arr[i] = temp[i];
    }
    return res;
}

long long getCountInv(long long *arr, long long low, long long high, std::vector<long long> &temp) {
    long long res = 0;
    if(low < high){
        long long mid = low + (high - low)/2;
        res += getCountInv(arr, low, mid, temp);
        res += getCountInv(arr, mid + 1, high, temp);
        res += perfromMerge(arr, temp, low, high, mid + 1);
    }
    return res;
}

long long int inversionCount(long long arr[], long long N)
{
    std::vector<long long> temp(N);
    long long res = getCountInv(arr, 0, N-1, temp);
    return res;
}


int main()
{
    long long arr[] = {2, 4, 1, 3, 5};
    long long n = sizeof(arr)/sizeof(arr[0]);
    long long res = inversionCount(arr, n);
    std::cout << res << std::endl;
    return 0;
}