#include <iostream>
#include <string>
#include <algorithm>
const int CHAR = 256;

using namespace std;

bool isAnagram(std::string str1, std::string str2) {
    int n = str1.length();
    int m = str2.length();
    if (n != m) {
        return false;
    }
    int count[CHAR] = {0};
    for (int i = 0; i < n; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for (int i = 0; i < CHAR; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

bool isAnagramV1(std::string str1, std::string str2) {
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main() {
    std::string str1 = "listen";
    std::string str2 = "silent";
    bool res1 = isAnagram(str1, str2);
    bool res2 = isAnagramV1(str1, str2);
    std::cout << res1 << std::endl; // should output 1 (true)
    std::cout << res2 << std::endl; // should output 1 (true)
    return 0;
}
