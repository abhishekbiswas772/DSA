package Searching;

public class TripletSum {

    private static boolean getTripletSum(int[] arr, int sum){
        int n = arr.length;
        for(int i = 0; i < n-2; i++){
            for(int j = i+1; j < n-1; j++){
                for(int k = j + 1; k < n;  k++){
                    if(arr[i] + arr[j] + arr[k] == sum){
                        return true;
                    }
                }
            }
        }
        return false;
    }

    private static boolean getPairSum(int[] arr, int start, int n, int sum){
        int low = start;
        int high = n -1;
        while(low <= high){
            if(arr[low] + arr[high] == sum){
                return true;
            }else if(arr[low] + arr[high] > sum){
                high -= 1;
            }else{
                low += 1;
            }
        }
        return false;
    }

    private static boolean getTripletWithGivenSum(int[] arr, int sum) {
        int n = arr.length;
        for(int i = 0; i < n-2; i++){
            int tempSum = sum - i;
            if(getPairSum(arr, i+1, n, tempSum)){
                return true;
            }else{
                return false;
            }
        }
        return false;
    }
}
