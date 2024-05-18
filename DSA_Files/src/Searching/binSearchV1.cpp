#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>


using namespace std;

bool getElementIsPresent(std::vector<int>arr, int x){

    
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == x){
            return true;
        }else if(arr[mid] > x){
            high = mid - 1;
        }else {
            low = mid + 1;
        }
    }
    return false;
}



int main() {
	int n;
	int k;
    std::cout << "Enter Value for N" << std::endl;
	std::cin >> n;
    std::cout << "Enter Value for K" << std::endl;
	std::cin  >> k;
	std::vector<int> arr;
    std::cout << "Enter Value for array" << std::endl;
	for(int i = 0; i < n; i++){
	    std::cin >> arr[i];
	}
	
    int res = getElementIsPresent(arr, k);
    if(res){
        std::cout << "YES" << std::endl;
    }else{
        std::cout << "NO" << std::endl;
    }
    return 0;
}
