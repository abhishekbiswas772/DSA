#include <iostream>

using namespace std;

int getSumofDigitTailEle(int n, int accumulator){
    if (n == 0){
        return accumulator;
    }

    return getSumofDigitTailEle(n / 10, accumulator + (n % 10));
}


int getSumOfDigitWithOutTailEle(int n){
    if(n == 0){
        return 0;
    }
    return n%10 + getSumOfDigitWithOutTailEle(n / 10);
}

int main(){
    int n = 2002;
    int res = getSumofDigitTailEle(n, 0);
    int res2 = getSumOfDigitWithOutTailEle(n);
    std::cout << res << std::endl;
    std::cout << res2 << std::endl;
    return 0;
}