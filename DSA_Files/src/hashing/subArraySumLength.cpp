#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;


int getCountSubArraySum(std::vector<int> arr, int sum){
    std::unordered_map<int, int> uMap;
    uMap[0] = 1;
    int n = arr.size();
    int prefix_sum = 0;
    int result = 0;
    for(int i = 0; i < n; i++){
        prefix_sum += arr[i];
        if(uMap.find(prefix_sum - arr[i]) != uMap.end()){
            result += uMap[prefix_sum - sum];
        }
        uMap[prefix_sum] += 1; 
    }
    return result;
}

int main(){
    std::vector<int> arr = {10,2,-2,-20,10};
    int sum = -10;
    int count = getCountSubArraySum(arr, sum);
    std::cout << count << std::endl;
    return 0;
}