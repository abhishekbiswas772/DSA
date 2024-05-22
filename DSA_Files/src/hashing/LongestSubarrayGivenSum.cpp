#include <iostream>
#include <vector>
#include <unordered_map>



using namespace std;


int getCountLongestSubArrayGivenSum(std::vector<int> arr, int sum){
    int n = arr.size();
    int prefix_sum = 0;
    int res = 0;
    std::unordered_map<int, int> uMap;
    for(int i = 0; i < n; i++){
        prefix_sum += arr[i];
        if(prefix_sum == sum){
            return i + 1;
        }

        if(uMap.find(prefix_sum - sum) == uMap.end()){
            uMap.insert({prefix_sum, i});
        }

        if(uMap.find(prefix_sum - sum) != uMap.end()){
            res = std::max(res, i - uMap[prefix_sum - sum]);
        }
    }
    return res;
}


int main(){
    std::vector<int> arr = {5, 2, 3};
    int sum = 5;
    int count = getCountLongestSubArrayGivenSum(arr, sum);
    std::cout << count << std::endl;
    return 0;
}