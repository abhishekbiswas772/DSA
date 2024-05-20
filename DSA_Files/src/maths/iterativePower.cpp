#include <iostream>
using namespace std;

int iterPower(int base, int exp){
    int res = 1;
    while(exp > 0){
        if(exp % 2 != 0){
            res = res * base;
        }
        base = base * base;
        exp = exp / 2;
    }
    return res;
}

int main(){
    int base = 2;
    int exp = 3;
    int res = iterPower(2, 3);
    std::cout << res << std::endl;
    return 0;
}