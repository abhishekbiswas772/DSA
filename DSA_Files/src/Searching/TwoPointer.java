package Searching;

public class TwoPointer {
    private static boolean checkIfSumPresent(int[] arr, int sum){
        int n = arr.length;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] + arr[j] == sum){
                    return true;
                }
            }
        }
        return false;
    }


    private static boolean checkIfSumPresentUsingTwoPointer(int[] arr, int sum)
    {
        int low = 0;
        int high = n-1;
        while(low < high){
            if(arr[low] + arr[high] == x){
                return true;
            }else if(arr[low] + arr[high] > x){
                high -= 1;
            }else{
                low += 1;
            }
        }
        return false;
    }
}
