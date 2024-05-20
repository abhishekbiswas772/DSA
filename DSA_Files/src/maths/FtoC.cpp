#include <iostream>

int getFToC(int x){
    int F = 9/5 * x + 32;
    return F;
}



int main(){
    int C = 32;
    int res = getFToC(C);
    std::cout << res << std::endl;
    return res;
}