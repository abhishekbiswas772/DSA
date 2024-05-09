package Searching;

public class SearchInSortedRotateArray {


    private static int getSortedRotatedArray(int[] arr, int x){
        int n = arr.length;
        for(int i = 0; i < n; i++){
            if(arr[i] == x){
                return i;
            }
        }
        return -1;
    }


    private static int performSearchRotateArray(int[] arr, int x){
        int n = arr.length;
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == x){
                return mid;
            }
            if(arr[low] <= arr[mid]){
                if(x >= arr[mid] && x < arr[mid]){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }else if(arr[high] >= arr[mid]){
                if(x > arr[mid] && x <= arr[high]){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
}
