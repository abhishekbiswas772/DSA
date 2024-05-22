#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;


int getHashingPair(std::vector<int> arr, int sum){
    int n = arr.size();
    std::unordered_set<int> uSet;
    for(int i = 0; i < arr.size(); i++){
        if(uSet.find(sum - arr[i]) != uSet.end()){
            return 1;
        }else{
            uSet.insert(arr[i]);
        }
    }
    return 0;
}


int main(){
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
    int sum = 14;
    int result = getHashingPair(arr, sum);
    std::cout << result << std::endl;
    return 0;
}