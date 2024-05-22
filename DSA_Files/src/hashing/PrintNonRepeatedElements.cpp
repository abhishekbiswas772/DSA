#include <iostream>
#include <vector>
#include <unordered_map>



using namespace std;


std::vector<int> getPrintNonRepeatedElement(std::vector<int> arr){
    int n = arr.size();
    std:vector<int> res;
    std::unordered_map<int, int> uMap;
    for(int i = 0; i < n; i++){
        uMap[arr[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(uMap[arr[i]] == 1){
            res.push_back(arr[i]);
        }
    }
    return res;
}


int main(){
    std::vector<int> arr = {1,1,2,2,3,3,4,5,6,7};
    std::vector<int> res = getPrintNonRepeatedElement(arr);
    for(int i = 0; i < arr.size(); i++){
        std::cout << res[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}