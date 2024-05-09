package Searching;

public class SearchingElementSortedArray {
    private static int searchingElementSortedArray(int[] arr, int x){
        int n = arr.length;
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == x){
                return 1;
            }else if(arr[mid] > x){
                high = mid - 1;
            }else if(arr[mid] < x){
                low = mid + 1;
            }
        }
        return -1;
    }
}
