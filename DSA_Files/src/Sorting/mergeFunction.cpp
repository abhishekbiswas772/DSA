#include <iostream>
#include <vector>


using namespace std;


std::vector<int> performMergeArray(int left[], int right[], int n1, int n2){
    std::vector<int> res;
    int i = 0;
    int j = 0;
    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            res.push_back(left[i]);
            i++;
        }else{
            res.push_back(right[j]);
            j++;
        }
    }

    while(i < n1){
        res.push_back(left[i]);
        i++;
    }

    while(j < n2){
        res.push_back(right[j]);
        j++;
    }
    return res;
}


std::vector<int> perfromSimulateMergeFunc(int arr[], int low, int high, int mid){
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1];
    int right[n2];

    for(int i = 0; i < n1; i++){
        left[i] = arr[low + i];
    }
    for(int j = 0; j < n2; j++){
        right[j] = arr[mid + j + 1];
    }
    std::vector<int> result = performMergeArray(left, right, n1, n2);
    return result;
}



int main() {
    int arr[] = {10, 20, 40, 20, 30};
    int low = 0;
    int mid = 2;
    int high = 4;
    std::vector<int> res = perfromSimulateMergeFunc(arr, low, high, mid);
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << std::endl;
    }
    std::cout << " " << std::endl; 
    return 0;
}