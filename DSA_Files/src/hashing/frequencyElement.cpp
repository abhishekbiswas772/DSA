#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

void getFrequencyOfElement(std::vector<int> arr){
    int n = arr.size();
    std::unordered_map<int, int> uMap;
    for(int  i = 0; i < n; i++){
        uMap[arr[i]]++;
    }
    for(auto i : uMap){
        std::cout << i.first << "  " << i.second << std::endl;
    }
}


void getFrequencyOfElementV1(std::vector<int> arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                flag = true;
                break;
            }
        }
        if(flag){
            continue;
        }

        int freq = 1;
        for(int j = i + 1; j < n; j++){
            if(arr[j] == arr[i]){
                freq++;
            }
        }
        std::cout << arr[i] << "   " << freq << std::endl;
    }
}

int main(){
    std::vector<int> arr = {10, 12, 10, 15, 10, 20, 12, 12};
    getFrequencyOfElementV1(arr);
    // getFrequencyOfElement(arr);
    return 0;
}