package Searching;

import java.util.Arrays;

public class CountOnesInBinaryArrayV1 {

    private static int getCountOneBinaryArrV1(int[] arr){
        Arrays.sort(arr);
        int n = arr.length;
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == 0){
                low = mid + 1;
            }else{
                if(mid == 0 || arr[mid] != arr[mid - 1]){
                    return mid;
                }else{
                    high = mid - 1;
                }
            }
        }
        return 0;
    }
}
