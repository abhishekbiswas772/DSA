#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;


bool getPairSumUnsortedArray(std::vector<int> arr, int sum){
    std::unordered_set<int> uSet;
    for(int i = 0; i < arr.size(); i++){
        if(uSet.find(sum - arr[i]) != uSet.end()){
            return true;
        }else {
            uSet.insert(arr[i]);
        }
    }
    return false;
}



int main(){
    std::vector<int> arr = {8, 3, 4, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 11;
    bool result = getPairSumUnsortedArray(arr, sum);
    std::cout << result << std::endl;
    return 0;
}