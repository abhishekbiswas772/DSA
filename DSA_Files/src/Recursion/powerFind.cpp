#include <iostream>


using namespace std;


int getPower(int base, int exp, int accumulator){
    if(exp == 0){
        return accumulator;
    }

    return getPower(base, exp - 1, accumulator * base);
}


int main(){
    int base = 2;
    int exp = 3;
    int result = getPower(base, exp, 1);
    std::cout << result << std::endl;
    return 0;
}