#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>


using namespace std;

void getReverse(char arr[], int low, int high){

    while(low < high){
        std::swap(arr[low], arr[high]);
        low++;
        high--;
    }
}


std::string getReverseString(std::string arr){
    int n = arr.length();
    char temp[n + 1];
    std::strcpy(temp, arr.c_str());
    int start = 0;
    for(int end = 0; end < n; end++){
        if(temp[end] == '.'){
            getReverse(temp, start, end - 1);
            start = end + 1;
        }
    }
    getReverse(temp, start, n - 1);
    getReverse(temp, 0, n - 1);
    return std::string(temp);
}


int main(){
    std::string arr = "i.like.this.program.very.much";
    std::string str = getReverseString(arr);
    std::cout << str << std::endl;
    return 0;
}