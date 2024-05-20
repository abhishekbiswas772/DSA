#include <iostream>

using namespace std;

bool isPrimeNumberV1(int a) {
    if (a <= 1) {
        return false;
    }
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPrimeNumberV2(int a) {
    if (a <= 1) {
        return false;
    }
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPrimeNumber(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2 || n == 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a = 101;
    bool res1 = isPrimeNumber(a);
    bool res2 = isPrimeNumberV1(a);
    bool res3 = isPrimeNumberV2(a);
    std::cout << res1 << std::endl; 
    std::cout << res2 << std::endl; 
    std::cout << res3 << std::endl; 
    return 0;
}
