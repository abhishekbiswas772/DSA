#include <iostream>

using namespace std;


int getComputePower(int base, int exp){
    int res = 1;
    for(int i = 0; i < exp; i++){
        res *= base;
    }
    return res;
}


int getComputePowerUsingRecursion(int base, int exp){
    if(exp == 0){
        return 1;
    }

    int temp = getComputePowerUsingRecursion(base, exp/2);
    temp  = temp * temp;
    if(exp % 2 == 0){
        return temp;
    }else{
        return temp * base;
    }
}


int main(){
    int base = 2;
    int exp = 3;
    int result = getComputePower(2, 3);
    int result2 = getComputePowerUsingRecursion(2, 3);
    std::cout << result << std::endl;
    std::cout << result2 << std::endl;
    return 0;
}