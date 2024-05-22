#include <iostream>
#include <unordered_set>
#include <vector>


using namespace std;


bool checkSubArrayWithGivenSum(std::vector<int> arr, int sum){
    int n = arr.size();
    int prefix_sum = 0;
    std::unordered_set<int> uSet;
    for(int i = 0; i < n; i++){
        prefix_sum += arr[i];
        if(prefix_sum == sum){
            return true;
        }
        if (uSet.find(prefix_sum - sum) != uSet.end()){
            return true;
        }
        uSet.insert(prefix_sum);
    }
    return false;
}


int main(){
    std::vector<int> arr = {5, 8, 6, 13, 3, -1};
    int sum = 22;
    bool result = checkSubArrayWithGivenSum(arr, sum);
    std::cout << result << std::endl;
    return 0;
}