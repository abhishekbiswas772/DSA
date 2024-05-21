#include <iostream>


using namespace std;

void getPrint1TON(int n){
    if (n == 0){
        return ;
    }
    getPrint1TON(n - 1);
    std::cout << n << " ";
}

int main(){
    int n = 100;
    getPrint1TON(n);
    return 0;
}