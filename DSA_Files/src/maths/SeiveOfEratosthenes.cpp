#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
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

std::vector<int> getAllPrimeNumberBelowThanN(int n) {
    std::vector<int> res;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            res.push_back(i);
        }
    }
    return res;
}

std::vector<int> seiveOfEratosthenes(int n) {
    std::vector<bool> visitedArray(n + 1, true);
    std::vector<int> result;
    for (int i = 2; i * i <= n; i++) {
        if (visitedArray[i]) {
            for (int j = i * i; j <= n; j += i) {
                visitedArray[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (visitedArray[i]) {
            result.push_back(i);
        }
    }
    return result;
}

std::vector<int> seiveOfEratosthenesV1(int n) {
    std::vector<int> res;
    std::vector<bool> visitedArray(n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (visitedArray[i]) {
            for (int j = i * i; j <= n; j += i) {
                visitedArray[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (visitedArray[i]) {
            res.push_back(i);
        }
    }
    return res;
}

int main() {
    int x = 20;
    std::vector<int> res = getAllPrimeNumberBelowThanN(x);
    std::vector<int> res1 = seiveOfEratosthenes(x);
    std::vector<int> res2 = seiveOfEratosthenesV1(x);

    for (int i = 0; i < res.size(); i++) {
        std::cout << res[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < res1.size(); i++) {
        std::cout << res1[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < res2.size(); i++) {
        std::cout << res2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
