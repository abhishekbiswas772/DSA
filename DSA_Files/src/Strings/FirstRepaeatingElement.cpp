#include <string>
#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;

int getFirstOccurence(std::string str) {
    int res = -1;
    int n = str.length();
    bool arr[256] = { false };
    
    for (int i = n - 1; i >= 0; i--) {
        if (arr[str[i]]) {
            res = i;
        } else {
            arr[str[i]] = true;
        }
    }
    return res;
}

int getFirstOccurenceV1(std::string str) {
    int res = std::numeric_limits<int>::max();
    int n = str.length();
    int arr[256];
    std::fill(arr, arr + 256, -1);
    
    for (int i = 0; i < n; i++) {
        int fi = arr[str[i]];
        if (fi == -1) {
            arr[str[i]] = i;
        } else {
            res = std::min(res, fi);
        }
    }
    return (res == std::numeric_limits<int>::max()) ? -1 : res;
}

int getFirstOccurenceV2(std::string str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] == str[j]) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    std::string str = "abccbd";
    int res = getFirstOccurence(str);
    int res1 = getFirstOccurenceV1(str);
    int res2 = getFirstOccurenceV2(str);
    std::cout << res << std::endl;  
    std::cout << res1 << std::endl; 
    std::cout << res2 << std::endl;
    return 0;
}
