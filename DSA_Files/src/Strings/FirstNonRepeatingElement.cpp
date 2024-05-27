#include <iostream>
#include <string>
#include <algorithm>
#include <limits>


using namespace std;

int getFirstNonRepeatingElement(std::string str){
    int n = str.length();
    const int char_count = 256;
    int count_array[char_count];
    std::fill(count_array, count_array + char_count, -1);
    for(int i = 0; i < n; i++){
        if(count_array[str[i]] == -1){
            count_array[str[i]] = i;
        }else{
            count_array[str[i]] = -2;
        }
    }
    int res = std::numeric_limits<int>::max();
    for(int i = 0; i < char_count; i++){
        if(count_array[i] >= 0){
            res = std::min(res, count_array[i]);
        }
    }
    return (res == std::numeric_limits<int>::max()) ? -1 : res;
}


int getFirstNonRepeatingElementV1(std::string str){
    int n = str.length();
    const int char_count = 256;
    int count_array[char_count] = {0};
    for(int i = 0; i < n; i++){
        count_array[str[i]]++;
    }

    for(int i = 0; i < n; i++){
        if(count_array[str[i]] == 1){
            return i;
        }
    }
    return -1;
}


int getFirstNonRepeatingElementV2(std::string str){
    int n = str.length();
    for(int i = 0; i < n; i++){
        bool flag = true;
        for(int j = 0; j < n; j++){
            if(i != j && (str[i] == str[j])){
                flag = true;
                break;
            }
        }
        if(!flag){
            return i;
        }
    }
    return -1;
}

int main(){
    std::string str = "abbcda";
    int res = getFirstNonRepeatingElement(str);
    int res2 = getFirstNonRepeatingElementV1(str);
    int res3 = getFirstNonRepeatingElementV2(str);
    std::cout << res << std::endl;
    std::cout << res2 << std::endl;
    std::cout << res3 << std::endl;
    return 0;
}