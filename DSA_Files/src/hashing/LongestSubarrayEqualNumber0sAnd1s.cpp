#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


int getLongestSubArrayEqualNumber(std::vector<int> arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            arr[i] = -1;
        }
    }

    std::unordered_map<int, int> uMap;
    int prefix_sum = 0;
    int res = 0;
    for(int i = 0; i < n; i++){
        prefix_sum += arr[i];
        if(prefix_sum == 0){
            return i + 1;
        }

        if(uMap.find(prefix_sum - 0) == uMap.end()){
            uMap.insert({prefix_sum, i});
        }

        if(uMap.find(prefix_sum - 0) != uMap.end()){
            res = std::max(res, i - uMap[prefix_sum - 0]);
        }
    }

    return res;
}


int main(){
    std::vector<int> arr = {1, 1, 1, 0, 1, 0};
    int countLongSubArrayEqlNum = getLongestSubArrayEqualNumber(arr);
    std::cout << countLongSubArrayEqlNum << std::endl;
    return 0;
}

