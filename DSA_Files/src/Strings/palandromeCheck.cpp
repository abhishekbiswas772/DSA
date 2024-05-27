#include <string>
#include <iostream>


using namespace std;


bool checkPal(std::string str){
    std::string res = str;
    std::reverse(res.begin(), res.end());
    return res == str;
}



bool checkPalEff(std::string str){
    int low = 0;
    int high = str.length() - 1;
    while( low < high ){
        if(str[low] != str[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int main(){
    std::string str = "ABBA";
    bool res1 = checkPal(str);
    bool res2 = checkPalEff(str);
    std::cout << res1 << std::endl;
    std::cout << res2 << std::endl;
    return 0;
}