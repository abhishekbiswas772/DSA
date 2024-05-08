package Arrays;

public class MinimumAdjacentDifferenceCircularArray {


    private static int getMaximumAdjacentDifference(int[] arr){
        int n = arr.length;
        int current_min = Math.abs(arr[1] - arr[0]);
        for(int i = 2; i < n; i++){
            int diff = Math.abs(arr[i] - arr[i-1]);
            current_min = Math.min(current_min, diff);
        }
        current_min = Math.min(current_min, arr[n-1] - arr[0]);
        return current_min;
    }
}
