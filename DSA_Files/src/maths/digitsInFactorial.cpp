#include <iostream>
#include <math.h>


using namespace std;

int digitsInFactorial(int x){
    double sum = 0;
    for(int i = 1;  i <= x; i++){
        sum = sum + log10(i);
    }
    return floor(sum) + 1;
}


int main() {
    int x = 5;
    int res = digitsInFactorial(x);
    std::cout << res << std::endl;
    return 0;
}