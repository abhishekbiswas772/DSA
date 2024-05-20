#include <iostream>

using namespace std;


int factorialIterative(int x){
    int res = 1;
    for(int i = 2; i <= x; i++){
        res = res * i;
    }
    return res;
}



int factorialNumberV1(int x){
    if (x == 1 || x == 0) {
        return 1;
    }
    return x * factorialNumberV1(x - 1);
}


// this is tail recursive code optimization
int factorialNumber(int x, int accumulator){
    if(x == 0 || x == 1){
        return accumulator;
    }
    return factorialNumber(x - 1, accumulator * x);
}



int main(){
    int x = 5;
    int res = factorialNumber(x, 1);
    int res1 = factorialIterative(x);
    int res2 = factorialNumberV1(x);
    std::cout << res1 << std::endl;
    std::cout << res << std::endl;
    std::cout << res2 << std::endl;
    return 0;
}