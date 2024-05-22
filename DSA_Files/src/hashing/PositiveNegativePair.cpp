#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;


std::vector<int> getPositiveAndNegetivePair(std::vector<int> arr){
    int n = arr.size();
    std::vector<int> res;
    std::unordered_set<int> uSet;
    for(int i = 0; i < n; i++){
        if(uSet.find((arr[i] * -1)) != uSet.end()){
            if(arr[i] < 0){
                res.push_back(arr[i]);
                res.push_back(arr[i] * -1);
            }else{
                res.push_back(arr[i] * -1);
                res.push_back(arr[i]);
            }
        }
        uSet.insert(arr[i]);
    }
    return res;
}

int main(){
    std::vector<int> arr = {1,3,6,-2,-1,-3,2,7};
    std::vector<int> res = getPositiveAndNegetivePair(arr); 
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}