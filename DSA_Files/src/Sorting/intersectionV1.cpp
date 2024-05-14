#include<iostream>
#include<vector>


using namespace std;


std::vector<int> getIntersectionArray(std::vector<int> arr1, std::vector<int> arr2, int n1, int n2){
	std::vector<int> res; 
	int i = 0;
	int j = 0;
	while( i < n1 && j < n2){
		if(i > 0 && arr1[i] == arr1[i-1]){
			i++;
			continue;
		}
		if(arr1[i] < arr2[j]){
			i++;
		}else if(arr1[i] > arr2[j]){
			j++;
		}else if(arr1[i] == arr2[j]){
			res.push_back(arr1[i]);
			i++;
			j++;
		}
	}
	return res;
}


int main() {
	std::vector<int> arr1 = {1, 2, 2, 4, 5};
	std::vector<int> arr2 = {1, 2, 7};
	std::vector<int> res = getIntersectionArray(arr1, arr2, arr1.size(), arr2.size());
	for(int i = 0; i < res.size(); i++){
		std::cout << res[i] << " ";
	}
	std::cout << " " << std::endl;
}
