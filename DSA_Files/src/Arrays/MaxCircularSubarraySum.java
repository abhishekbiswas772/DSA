package Arrays;

public class MaxCircularSubarraySum {
    private static int getMaxSubArraySum(int[] arr){
        int n = arr.length;
        int current_max = arr[0];
        int max_so_far = arr[0];
        
        for(int i = 1; i < n; i++){
            current_max = Math.max(current_max + arr[i], arr[i]);
            max_so_far = Math.max(current_max, max_so_far);
        }
        return max_so_far;
    }
    
    
    private static int getMaxCircularSubArraySum(int[] arr){
        int n = arr.length;
        int maxSum = getMaxSubArraySum(arr);
        if(maxSum < 0){
            return maxSum;
        }
        int current_sum = 0;
        for(int i = 0; i < n; i++){
            current_sum += arr[i];
            arr[i] = -arr[i];
        }
        current_sum = current_sum + getMaxSubArraySum(arr);
        current_sum = Math.max(current_sum, maxSum);
        return current_sum;
    }




    // brute force





}
