#include<iostream>
#include<vector>


using namespace std;


int getFibonacci(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    return getFibonacci(n - 1) + getFibonacci(n - 2);
}


int getFibonacciTailRecursion(int n, int prev1, int prev2){
    if(n < 0){
        return -1;
    }
    if(n == 1){
        return prev1;
    }
    if(n == 0){
        return prev2;
    }
    return getFibonacciTailRecursion(n - 1, prev1 + prev2, prev1);
}

int main(){
    int n = 24;
    int result = getFibonacci(n);
    std::cout << result << std::endl;


    int result2 = getFibonacciTailRecursion(n, 1, 0);
    std::cout << result2 << std::endl;
    return 0;
}