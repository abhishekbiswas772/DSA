#include <iostream>


using namespace std;


long long int multiplyUnderModulo(long long int a, long long int b){
    const long long int MOD = 1000000007;
    long long int res = ((a % MOD) * (b % MOD)) % MOD;
    return res;
}



int main(){
    long long int a = 92233720368547758;
    long long int b = 92233720368547758;
    long long int res = multiplyUnderModulo(a, b);
    std::cout << res << std::endl;
    return 0;
}