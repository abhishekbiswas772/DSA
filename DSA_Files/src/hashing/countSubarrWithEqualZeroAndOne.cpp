#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;


int countSubarrWithEqualZeroAndOne(std::vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < 0){
            arr[i] = -1;
        }
    }
    // problem reduce to subarray with zero sum
    int prefix = 0;
    int result = 0;
    std::unordered_map<int, int> uMap;
    uMap[0] = 1;
    for(int i = 0; i < arr.size(); i++){
        prefix += arr[i];
        if(uMap.find(prefix) != uMap.end()){
            result += uMap[prefix];
        }
        uMap[prefix]++;
    }
    return result;
}


int main(){
    std::vector<int> arr = {1,0,0,1,0,1,1};
    int count = countSubarrWithEqualZeroAndOne(arr);
    std::cout << count << std::endl;
    return 0;
}