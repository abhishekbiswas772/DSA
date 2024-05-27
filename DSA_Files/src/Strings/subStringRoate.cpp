#include <string>
#include <iostream>


using namespace std;


bool isRoatedString(std::string str1, std::string str2){
    int n = str1.length();
    int m = str2.length();
    if(n != m){
        return false;
    }
    if(n < 2){
        return str1 == str2;
    }
    std::string leftRotateString = str1.substr(2) + str1.substr(0, 2);
    std::string rightRotateString = str1.substr(n - 2) + str1.substr(0, n-2);
    return (str2 == leftRotateString || str2 == rightRotateString);
}

int main(){
    std::string str1 = "amazon";
    std::string str2 = "azonam";
    bool result = isRoatedString(str1, str2);
    std::cout << result << std::endl;
    return 0;
}