#include <iostream>
#include <vector>
#include <string>


using namespace std;


void generatePowerSet(std::string s, int index, std::vector<std::string> res, std::string curr){
    int n = s.length();
    if(n == index){
        return;
    }
    res.push_back(curr);
    for(int i = index + 1; i < n; i++){
        curr += s[i];
        generatePowerSet(s, i, res, curr);
        curr.erase(curr.size() - 1);
    }
}



int main(){
    std::vector<std::string> res;
    std::string testString = "abc";
    generatePowerSet(testString, -1, res, "");
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}