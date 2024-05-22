#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long int getZeroSumArrayCount(std::vector <long long int> arr){
    long long int n = arr.size();
    std::unordered_map<long long int, long long int> uMap;
    long long int result = 0;
    long long int prefix_sum = 0;
    uMap[0] = 1;
    for(int i = 0; i < n; i++){
        prefix_sum += arr[i];
        if(uMap.find(prefix_sum) != uMap.end()){
            result += uMap[prefix_sum];
        }
        uMap[prefix_sum] += 1;
    }
    return result;
}


int main(){
    std::vector<long long int> res = {0,0,5,5,0,0};
    long long int count = getZeroSumArrayCount(res);
    std::cout << count << std::endl;
    return 0;
}