package Searching;

public class FloorSortedArray {

    private static int getFloorSortedArray(int[] arr, int x){
        int n = arr.length;
        int low = 0;
        int ans = -1;
        int high = n - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == x){
                return mid;
            }else if(arr[mid] > x){
                high = mid - 1;
            }else if(arr[mid] < x){
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
}
