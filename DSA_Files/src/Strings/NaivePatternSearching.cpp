#include <iostream>
#include <string>


using namespace std;


void findPatternInString(std::string str, std::string ptr){
    int n = str.length();
    int m = ptr.length();
    for(int i = 0; i < n - m; i++){
        int j;
        for(j = 0; j < m; j++){
            if(ptr[j] != str[i + j]){
                break;
            }
        }
        if(j == m){
            std::cout << i << " ";
        }
    }
    std::cout << " " << std::endl;
}




int main(){
    std::string str = "ABABABCD";
    std::string k = "ABAB";
    findPatternInString(str, k);
    return 0;
}