package Searching;

public class BinarySearchV2 {

    private static int binarySearchV2(int[] arr, int low, int high, int x){
        int start = low;
        int end = high;
        while(start <= end){
            int mid = (start + end)/2;
            if(arr[mid] == x){
                return mid;
            }else if (arr[mid] > x){
                return binarySearchV2(arr, low, mid - 1, x);
            }else{
                return binarySearchV2(arr, mid+1, low, x);
            }
        }
        return -1;
    }
}
