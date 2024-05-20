#include <iostream>


using namespace std;



void getPaldromeNumber(int x){
    int ans = x;
    int rev = 0;
    while(ans != 0){
        rev = rev * 10 + ans % 10;
        ans /= 10;
    }

    if(rev == x){
        std::cout << "This x is palandrome number" << std::endl; 
    }else{
        std::cout << "This is not an palandrome number" << std::endl;
    }
    
}


int main(){
    int x = 363;
    getPaldromeNumber(x);
    return 0;
}