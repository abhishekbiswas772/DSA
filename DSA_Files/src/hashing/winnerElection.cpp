#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>


using namespace std;

std::vector<std::string> getWinnerForElection(std::vector<std::string> arr){
    int n = arr.size();
    std::unordered_map<std::string, int> uMap;
    for(int i = 0; i < n; i++){
        uMap[arr[i]]++;
    }
    int winnerCount = 0;
    std::string winnerName;
    for(auto i : uMap){
        int tempCount = i.second;
        std::string tempName = i.first;
        if(tempCount > winnerCount){
            winnerCount = tempCount;
        }else if(tempCount == winnerCount && winnerName > tempName){
            winnerName = tempName;
        }
    }
    std::vector<std::string> res = {winnerName, std::to_string(winnerCount)};
    return res;
}

int main(){
    std::vector<std::string> arr = {"john","johnny","jackie","johnny","john", 
                                    "jackie","jamie","jamie","john","johnny","jamie",
                                    "johnny","john"};
    std::vector<std::string> result = getWinnerForElection(arr);
    for(int i = 0; i < result.size(); i++){
        std::cout << result[i] << " ";
    }
    std::cout << "  " << std::endl;
    return 0;
}