#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool checkSubArrayWithZeroSum(std::vector<int> arr){
    int n = arr.size();
    int prefix_sum = 0;
    std::unordered_set<int> uSet;
    for(int i = 0; i < n; i++){
        prefix_sum += arr[i];
        if(prefix_sum == 0){
            return true;
        }
        if(uSet.find(prefix_sum ) != uSet.end()){
            return true;
        }
        uSet.insert(prefix_sum);
    }
    return true;
}


int main(){
    std::vector<int> arr = {4,2,-3,1,6};
    bool isResult = checkSubArrayWithZeroSum(arr);
    std::cout << isResult << std::endl;
    return 0;
}