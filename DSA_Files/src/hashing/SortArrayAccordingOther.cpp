#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

std::vector<int> getSortedArrayAccordingOther(std::vector<int> arr1, std::vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();
    std::vector<int> res;
    std::unordered_map<int, int> uMap;
    for(int i = 0; i < n; i++){
        uMap[arr1[i]]++;
    }

    for(int i = 0; i < m; i++){
        if(uMap.find(arr2[i]) != uMap.end()){
            for(int j = 0; j < uMap[arr2[i]]; j++){
                res.push_back(arr2[i]);
            }
            uMap.erase(arr2[i]);
        }
    }
    std::vector<int> remaining;
    for(auto& i : uMap){
        for(int k = 0; k < i.second; k++){
            remaining.push_back(i.first);
        }
    }
    std::sort(remaining.begin(), remaining.end());
    res.insert(res.end(), remaining.begin(), remaining.end());
    return res;
}

int main(){
    std::vector<int> arr1 = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    std::vector<int> arr2 = {2, 1, 8, 3};
    std::vector<int> res = getSortedArrayAccordingOther(arr1, arr2);

    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
