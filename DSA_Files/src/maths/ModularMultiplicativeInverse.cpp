#include <iostream>


using namespace std;

int getModularMultiplicativeInverse(int a, int m){
    for(int i = 0; i < m ; i++){
        if((((a % m) * (i % m)) % m) == 1){
            return i;
        } 
    }
    return -1;
}



int main(){
    int a = 3;
    int m = 11;
    int res = getModularMultiplicativeInverse(a, m);
    std::cout << res << std::endl;
    return 0;
}