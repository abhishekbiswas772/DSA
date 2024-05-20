#include <iostream>

using namespace std;

long long int getAddModulo(long long int a, long long int b){
    const long long int MOD = 1000000007; 
    long long int sum = (a % MOD + b % MOD) % MOD;
    return sum;
}

int main(){
    long long int a = 9223372036854775807;
    long long int b = 9223372036854775807;
    long long int res = getAddModulo(a, b);
    std::cout << res << std::endl;
    return 0;
}
