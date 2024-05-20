#include <iostream>
#include <math.h>
#include <vector>

using namespace std;


std::vector<int> quadraticEquations(int a, int b, int c){
    std::vector<int> res;
    int b_Square = b * b;
    int dis = sqrt(b * b - 4 * a * c);

    if(dis >= 0){
        int root1 = floor(-b + dis);
        int root2 = floor(-b - dis);
        if(root1 >= root2){
            res.push_back(root1);
            res.push_back(root2);
        }else{
            res.push_back(root2);
            res.push_back(root1);
        }
    }else{
        res.push_back(-1);
    }
    return res;
}

int main(){
    int a = 1;
    int b = -2;
    int c = 1;
    std::vector<int> res = quadraticEquations(a, b, c);
    for(int i = 0; i <  res.size(); i++){
        std::cout << res[i] << std::endl;
    }
    return 0;
}