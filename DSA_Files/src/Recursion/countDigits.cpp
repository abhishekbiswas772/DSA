#include<iostream>

using namespace std;


int countDigit(int n, int count) {
    if(n == 0){
        return count;
    }
    return countDigit(n / 10, count + 1);
}


int main(){
    int n = 2002;
    int res = countDigit(n, 0);
    std::cout << res << std::endl;
    return 0;
}