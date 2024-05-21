#include <iostream>

using namespace std;

long long int getComputePower(int base, int exp){
    const long long int Mod = 1000000007;
    if(exp == 1){
        return 1;
    }

    long long int temp = getComputePower(base, exp / 2);
    temp = (temp * temp) % Mod;
    if(exp % 2 == 0){
        return temp % Mod;
    }else{
        return (temp * base) % Mod;
    }
}


int main() {
    int base = 12;
    int exp = 21;
    long long ans = getComputePower(12, 21);
    std::cout << ans << std::endl;
    return 0;
}