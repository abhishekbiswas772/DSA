#include <iostream>
#include <vector>
#include <limits>


using namespace std;


int perfromKadaneAlgo(std::vector<int> arr){
    int current_sum = 0;
    int max_here = std::numeric_limits<int>::min();
    int n = arr.size();
    for(int i = 0; i < n; i++){
        current_sum += arr[i];
        if(current_sum > max_here){
            max_here = current_sum;
        }
        if(current_sum < 0){
            current_sum = 0;
        }
    }
    return max_here;
}


int main(void){
    std::vector<int> arr = {1,2,3,-2,5};
    int sum = perfromKadaneAlgo(arr);
    std::cout << sum << std::endl;
    return 0;
}