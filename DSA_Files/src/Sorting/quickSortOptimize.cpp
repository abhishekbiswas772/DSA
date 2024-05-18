#include <iostream>
#include <algorithm>

using namespace std;

int performLPartition(int *arr, int low, int high) {
    int key = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < key) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quicksort(int *arr, int low, int high) {
    while (low < high) {
        int p = performLPartition(arr, low, high);
        if (p - low < high - p) {
            quicksort(arr, low, p - 1);
            low = p + 1;
        } else {
            quicksort(arr, p + 1, high);
            high = p - 1;
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
