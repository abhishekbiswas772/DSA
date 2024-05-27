#include <string>
#include <iostream>




char getMaxOccuringCharFromStringUsingLex(std::string arr){
    int n = arr.length();
    int maxCount = 0;
    int candidateChar = arr[0];
    char temp[256] = {0};
    for(int i = 0; i < n; i++){
        temp[arr[i]]++;
    }

    for(int i = 0; i < 256; i++){
        if(temp[i] > maxCount){
            maxCount = temp[i];
            candidateChar = (char)i;
        }
    }
    return candidateChar;
}


int main(){
    std::string str = "output";
    char result = getMaxOccuringCharFromStringUsingLex(str);
    std::cout << result << std::endl;
    return 0;
}