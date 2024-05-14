#include <iostream>


using namespace std;

int performLumotoPart(int *arr, int low, int high){
	int key = arr[high];
	int i = low - 1;
	for(int j = low; j <= high - 1; j++){
		if(arr[j] < key){
			i++;
			std::swap(arr[i], arr[j]);
		}
	}
	std::swap(arr[i + 1], arr[high]);
	return i + 1;	
}



void performQuickSort(int *arr, int low, int high){
	if(low < high){
		int mid = performLumotoPart(arr, low, high);
		performQuickSort(arr, low, mid - 1);
		performQuickSort(arr, mid + 1, high);
	}
}


int main(){
	int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};
	int low = 0;
	int n = sizeof(arr)/sizeof(arr[0]);
	performQuickSort(arr, low, n-1);
	for(int i = 0; i < n; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << " " << std::endl;
	return 0;
}
