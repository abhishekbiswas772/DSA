#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

void reverseString(char str[], int low, int high) {
    while (low < high) { 
        std::swap(str[low], str[high]);
        low++;
        high--;
    }
}

std::string getReverseOfWordInString(std::string arr) {
    int n = arr.length();
    char temp[n + 1];
    std::strcpy(temp, arr.c_str());
    
    int start = 0;
    for (int end = 0; end < n; end++) {
        if (temp[end] == ' ') {
            reverseString(temp, start, end - 1);
            start = end + 1;
        }
    }
    reverseString(temp, start, n - 1); 
    reverseString(temp, 0, n - 1);
    
    return std::string(temp);
}

int main() {
    std::string str = "welcome to gfg";
    std::string res = getReverseOfWordInString(str);
    std::cout << res << std::endl;
    return 0;
}
