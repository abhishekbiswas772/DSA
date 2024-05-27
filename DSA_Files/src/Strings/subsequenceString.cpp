#include <iostream>
#include <string>

using namespace std;


bool getCheckSubSeqeunceString(std::string str1, std::string str2){
    int n = str1.length();
    int m = str2.length();
    if(m > n){
        return false;
    }
    int j = 0;
    for(int i = 0; i < n && j < m; i++){
        if(str1[i] == str2[j]){
            j++;
        }
    }
    return j == m;
}

bool getCheckSubSequenceStringUsingRecursion(std::string str1, std::string str2, int n, int m){
    if(m == 0){
        return true;
    }
    if(n == 0){
        return false;
    }
    if(str1[n - 1] == str2[m - 1]){
        getCheckSubSequenceStringUsingRecursion(str1, str2, n - 1, m - 1);
    }else{
        getCheckSubSequenceStringUsingRecursion(str1, str2, n - 1, m);
    }
}


int main(){
    std::string str1 = "YADXCP";
    std::string str2 = "AXY";
    bool res1 = getCheckSubSeqeunceString(str1, str2);
    bool res2 = getCheckSubSequenceStringUsingRecursion(str1, str2, str1.length(), str2.length());
    std::cout << res1 << std::endl;
    std::cout << res2 << std::endl;
    return 0;
}
