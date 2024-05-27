#include <iostream>
#include <string>

using namespace std;

void findPatternInStringBetter(const std::string& arr, const std::string& ptr) {
    int n = arr.length();
    int m = ptr.length();
    for (int i = 0; i <= n - m; ) {
        int j;
        for (j = 0; j < m; j++) {
            if (ptr[j] != arr[i + j]) {
                break;
            }
        }
        if (j == m) {
            std::cout << i << " ";
        }
        if (j == 0) {
            i++;
        } else {
            i += j; 
        }
    }
    std::cout << std::endl;
}

int main() {
    std::string str = "ABABABCD";
    std::string k = "ABAB";
    findPatternInStringBetter(str, k);
    return 0;
}
