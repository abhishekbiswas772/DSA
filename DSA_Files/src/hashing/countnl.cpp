#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

std::vector<int> getCountOccurencesNKUsingHashMap(std::vector<int> arr, int k){
    std::unordered_map<int, int> uMap;
    int n = arr.size();
    for(int i = 0; i < arr.size(); i++){
        uMap[arr[i]]++;
    }
    std::vector<int> res;
    for(auto i : uMap){
        if(i.second > n/k){
            res.push_back(i.first);
        }
    }
    return res;
}


std::vector<int> getCountNkUsingMooreVotingAlgo(std::vector<int> arr, int k){
    std::vector<int> res;
    int n = arr.size();
    if (k < 2){
        return res;
    }
    std::unordered_map<int, int> candidateElementMap;
    std::unordered_map<int, int> verifyCandidateMap;

    // phase 1 of moore voting algo
    for(int i = 0;  i < n; i++){
        if(candidateElementMap.find(arr[i]) != candidateElementMap.end()){
            candidateElementMap[arr[i]]++;
        }else if(candidateElementMap.size() < k - 1){
            candidateElementMap[arr[i]] = 1;
        }else{
            for(auto k = candidateElementMap.begin(); k != candidateElementMap.end();){
                k->second--;
                if(k->second == 0){
                    k = candidateElementMap.erase(k);
                }else{
                    ++k;
                }
            }
        }
    }


    //phase 2 of moore voting algo
    for(int i = 0; i < n; i++){
        if(candidateElementMap.find(arr[i]) != candidateElementMap.end()){
            verifyCandidateMap[arr[i]]++;
        }
    }

    for(const auto& pair : verifyCandidateMap){
        if(pair.second > n/k){
            res.push_back(pair.first);
        }
    }
    return res;
}


int main(){
    std::vector<int> arr = {3, 1, 2, 2, 1, 2, 3, 3};
    int k = 4;
    std::vector<int> res = getCountNkUsingMooreVotingAlgo(arr, k);
    std::vector<int> res1 = getCountNkUsingMooreVotingAlgo(arr, k);
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << " ";
    }
    std::cout <<  " " << std::endl;
    for(int i = 0; i < res1.size(); i++){
        std::cout << res1[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}