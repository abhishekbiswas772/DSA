#include <iostream>
#include <vector>


using namespace std;


bool isPrime(int n){
    if(n == 1){
        return false;
    }

    if(n == 2 || n == 3){
        return true;
    }

    if(n % 2 == 0 || n % 3 == 0){
        return false;
    }

    for(int i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 1) == 0){
            return false;
        }
    }
    return true;
}


std::vector<int> getPrimeFactorsOfN(int n){
    std::vector<int> res;
    for(int i = 2; i < n; i++){
        if(isPrime(i)){
            int x = i;
            while(n % x == 0){
                res.push_back(x);
                x = x * i;
            }
        }
    }
    return res;
}


std::vector<int> getPrimeFactorOfNV1(int n){
    std::vector<int> res;
    if(n <= 1){
        return res;
    }
    for(int i = 2; i*i <= n; i++){
        while(n % i == 0){
            res.push_back(i);
            n = n / i;
        }
    }

    if(n > 1){
        res.push_back(n);
    }
    return res;
}



std::vector<int> getPrimeFactorOfNV2(int n){
    std::vector<int> res;
    if(n <= 1){
        return res;
    }
    while(n % 2 == 0){
        res.push_back(2);
        n = n / 2;
    }

    while(n % 3 == 0){
        res.push_back(3);
        n = n/3;
    }

    for(int i = 5; i * i <= n; i+= 6){
        if(n % i == 0){
            res.push_back(i);
            n = n / i;
        }

        if(n % (i + 2) == 0){
            res.push_back(i);
            n = n / (i + 2);
        }
    }
    return res;
}

int main(){
    int n = 12;
    std::vector<int> res = getPrimeFactorsOfN(n);
    std::vector<int> res1 = getPrimeFactorOfNV1(n);
    std::vector<int> res2 = getPrimeFactorOfNV2(n);
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << " ";
    }
    std::cout << " " << std::endl;

    for(int i = 0; i < res1.size(); i++){
        std::cout << res1[i] << " ";
    }
    std::cout << " " << std::endl;


    for(int i = 0; i < res2.size(); i++){
        std::cout << res2[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}