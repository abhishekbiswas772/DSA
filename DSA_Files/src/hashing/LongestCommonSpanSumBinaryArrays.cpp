#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>




int getLongestCommonSpanSumNumber(std::vector<int> arr1, std::vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();

    std::vector<int> res(n);
    std::unordered_map<int, int> uMap;
    int count = 0;
    for(int i = 0; i< n; i++){
        res[i] = arr1[i] - arr2[i];
    }
    int prefix_sum = 0;
    for(int i = 0; i < n; i++){
        prefix_sum += res[i];
        if(prefix_sum == 0){
            return i + 1;
        }

        if(uMap.find(prefix_sum - 0) == uMap.end()){
            uMap.insert({prefix_sum, i});
        }

        if(uMap.find(prefix_sum - 0) != uMap.end()){
            count = std::max(count, i - uMap[prefix_sum - 0]);
        }
    }
    return count;
}




int main(){
    std::vector<int> arr1 = {0, 1, 0, 0, 0, 0};
    std::vector<int> arr2 = {1, 0, 1, 0, 0, 1};
    int count = getLongestCommonSpanSumNumber(arr1, arr2);
    std::cout << count << std::endl;
    return 0;
}