#include <iostream>
#include <unordered_map>
#include <vector>


using namespace std;

std::vector<int> getTwoRepeatedElement(std::vector<int> res){
    int n = res.size();
    std::vector<int> arr;
    int i;
    for(i = 0; i < n; i++){
        if(res[std::abs(res[i])] > 0){
            res[std::abs(res[i])] = -res[std::abs(res[i])];
        }else{
            arr.push_back(std::abs(res[i]));
        }
    }
    return arr;
}



int main() {
    std::vector<int> arr = {1,2,1,3,4,3};
    std::vector<int> result = getTwoRepeatedElement(arr);
    for(int i = 0; i < result.size(); i++){
        std::cout << result[i] << std::endl;
    }
    return 0;
}