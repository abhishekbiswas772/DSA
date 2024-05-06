package Arrays;

public class WindowSlidingTechnique {

    private static int getMaxSubArraySubOfK(int[] arr, int k){
        int n = arr.length;
        int max_so_far = Integer.MIN_VALUE;
        for(int i = 0; i + k - 1 < n; i++){
            int temp = 0;
            for(int j = 0; j < k; j++){
                temp += arr[i + j];
            }
            max_so_far = Math.max(temp, max_so_far);
        }
        return max_so_far;
    }


    // This Program is Called "Sliding Window Technique"
    private static int slidingWindowTechnique(int[] arr, int k){
        int n = arr.length;
        int res = 0;
        int current_sum = 0;
        // this is O(k)
        for(int i = 0; i < k; i++){
            current_sum += arr[i];
        }
        res = current_sum;
        for(int i = k; i < n; i++){
            current_sum = current_sum + arr[i] - arr[i-k];
            res = Math.max(current_sum, res);
        }
        return res;
    }



}
