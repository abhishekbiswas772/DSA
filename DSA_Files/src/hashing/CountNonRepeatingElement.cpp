#include <iostream>
#include <vector>
#include <unordered_map>



int getCountForNonRepeatingElement(std::vector<int> arr){
    int n = arr.size();
    std::unordered_map<int, int> uMap;
    for(int i = 0; i < n; i++){
        uMap[arr[i]]++;
    }
    int count = 0;
    for(auto i : uMap){
        if(i.second == 0){
            count++;
        }
    }
    return count;
}


int main(){
    std::vector<int> arr= {1, 1, 2, 2, 3, 3, 4, 5, 6, 7};
    int count = getCountForNonRepeatingElement(arr);
    std::cout << count << std::endl;
    return 0;
}