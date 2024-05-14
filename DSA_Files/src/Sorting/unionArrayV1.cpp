#include <iostream>
#include <vector>
#include <set>

using namespace std;

std::vector<int> getUnionOfArrayEff(int *arr1, int *arr2, int n1, int n2){
	std::set<int> unionSet;
	int i = 0;
	int j = 0;
	while(i < n1 && j < n2){
		if(i > 0 && arr1[i] == arr1[i - 1]){
			i++;
			continue;
		}

		if(j > 0 && arr2[j] == arr2[j - 1]){
			j++;
			continue;
		}

		if(arr1[i] < arr2[j]){
			unionSet.insert(arr1[i]);
			i++;
		}else if (arr1[i] > arr2[j]){
			unionSet.insert(arr2[j]);
			j++;
		}else if(arr1[i] == arr2[j]){
			unionSet.insert(arr2[j]);
			i++;
			j++;
		}
	}	
	while(i < n1){
		unionSet.insert(arr1[i]);
		i++;
	}

	while(j < n2){
		unionSet.insert(arr2[j]);
		j++;
	}

	std::vector<int> res(unionSet.begin(), unionSet.end());
	return res;
}



int main() {

	int arr1[] = {10, 20, 20, 40, 60};
    int arr2[] = {2, 20, 20, 20};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    std::vector<int> res = getUnionOfArrayEff(arr1, arr2, n1, n2);
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << std::endl;
    }
    std::cout << "" << std::endl;
    return 0;
}
