#include <iostream>
#include <algorithm>



using namespace std;

int getGCDNumber(int x, int y){
    int possibleCandidate = std::min(x, y);
    while(possibleCandidate > 0){
        if((x % possibleCandidate == 0) && (y % possibleCandidate == 0)){
            break;
        }
        possibleCandidate--;
    }
    return possibleCandidate;
}


int getGCDEff(int x, int y){
    while(x != y){
        if(x > y){
            x = x - y;
        }else{
            y = y - x;
        }
    }
    return x;
}

int getGCDEffient(int x, int y){
    if (y == 0){
        return x;
    }
    return getGCDEffient(y, x % y);
}



int main() {
    int x = 10;
    int y = 15;
    int res = getGCDNumber(x, y);
    int res2 = getGCDEff(x, y);
    std::cout << res << std::endl;
    std::cout << res2 << std::endl;
    return 0;
}