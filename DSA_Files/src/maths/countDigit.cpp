#include <iostream>


using namespace std;


int countDigit(int x) {
    int count = 0;
    int ans = x;
    while(x > 0){
        x /= 10;
        count++;
    }
    return count;
}



int main(){
    int x = 1234;
    int res = countDigit(x);
    std::cout << res << std::endl;
    return 0;
}