#include <iostream>

using namespace std;


int getGCD(int a, int b){
    if (b == 0){
        return a;
    }
    return getGCD(b, a % b);
}


int getLCM(int a, int b){
    int lcm = (a * b) / getGCD(a, b);
    return lcm;
}


int getLCMV1(int a, int b){
    int res = std::max(a, b);
    while(true){
        if((res % a == 0) && (res % b == 0)){
            return res;
        }
        res++;
    }
    return res;
}

int main(){
    int a = 4;
    int b = 6;
    int res = getLCM(a, b);
    int res1 = getLCMV1(a, b);
    std::cout << res1 << std::endl;
    std::cout << res << std::endl;
    return 0;
}