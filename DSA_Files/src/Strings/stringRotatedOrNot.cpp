#include <iostream>
#include <string>
#include <algorithm>



bool checkWeatherStringRotatedOrNot(std::string str1, std::string str2){
    int n = str1.length();
    int m = str2.length();
    if(n != m){
        return false;
    }
    return ((str1 + str2).find(str2) != std::string::npos);
}



int main(){
    std::string str1 = "ABCD";
    std::string str2 = "CDAB";
    bool result = checkWeatherStringRotatedOrNot(str1, str2);
    std::cout << result << std::endl;
    return result;
}