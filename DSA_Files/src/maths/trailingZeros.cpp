#include <iostream>


using namespace std;

int getTrailingZero(int x){
    int res = 0;
    for(int i = 5; i <= x; i = i*5){
        res = (res + x/i);
    }
    return res;
}


int main(){
    int x = 13;
    int res = getTrailingZero(x);
    std::cout << res << std::endl;
    return 0;    
}