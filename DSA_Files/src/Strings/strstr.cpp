#include <iostream>
#include <string>

using namespace std;

int getStrStr(std::string str, std::string pat){
    int n = str.length();
    int m = pat.length();
    for(int i = 0; i <= n - m; i++){
        int j;
        for(j = 0; j < m; j++){
            if(pat[j] != str[i+j]){
                break;
            }
        }
        if(j == m){
            return i;
        }
    }
    return -1;
}


int main(){
    std::string str = "GeeksForGeeks";
    std::string pat = "Fi";
    int result = getStrStr(str, pat);
    std::cout << result << std::endl;
    return 0;
}