package Searching;

public class CountOnesInSortedBinaryArray {

    private static int getCountOneInSortedBinArray(int[] arr){
        int n = arr.length;
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == 0) {
                low  = mid + 1;
            }else {
                if(mid == 0 || arr[mid] != arr[mid - 1]){
                    return n - mid;
                }else{
                    high = mid - 1;
                }
            }
        }
        return 0;
    }


    private static int getCountOneInSortedBinArrayV1(int[] arr){
        int res = 0;
        int n = arr.length;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                res += 1;
            }
        }
        return res;
    }
}
