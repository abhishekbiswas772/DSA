#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int getDistinctElement(std::vector<int> arr){
    int n = arr.size();
    std::unordered_set<int> uSet;
    for(int i = 0; i < n; i++){
        uSet.insert(arr[i]);
    }
    return uSet.size();
}


int getDistinctElementV1(std::vector<int> arr){
    int n = arr.size();
    int count = 0;
    for(int i = 0; i < n; i++){
        bool isFlag = false;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                isFlag = true;
                break;
            }
        }
        if(isFlag == false){
            count += 1;
        }
    }
    return count;
}


int main(){
    std::vector<int> arr = {10, 20, 10, 20, 30};
    int res = getDistinctElement(arr);
    int res1 = getDistinctElementV1(arr);
    std::cout << res1 << std::endl;
    std::cout << res << std::endl;
    return 0;
}