#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;


bool checkSubArrayZeroSum(std::vector<int> arr){
    int sum = 0;
    int n = arr.size();
    std::unordered_set<int> uSet;
    int prefix_sum = 0;
    for(int i = 0; i < n; i++){
        prefix_sum += arr[i];
        if(prefix_sum == sum){
            return true;
        }
        if(uSet.find(prefix_sum - arr[i]) != uSet.end()){
            return true;
        }
        uSet.insert(prefix_sum);
    }
    return false;
}


int main(){
    std::vector<int> arr = {-3, 4, -3, -1, 1};
    bool result = checkSubArrayZeroSum(arr);
    std::cout << result << std::endl;
    return 0;
}