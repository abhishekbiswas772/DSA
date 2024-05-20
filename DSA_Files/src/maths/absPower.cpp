#include <iostream>


using namespace std;

int getAbsoluteValue(int x){
    int res = std::abs(x);
    return res;
}


int main(){
    int x = -12231;
    int res = getAbsoluteValue(x);
    std::cout << res << std::endl;
    return 0;
}