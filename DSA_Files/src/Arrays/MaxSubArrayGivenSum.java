package Arrays;

public class MaxSubArrayGivenSum {


    private static boolean getMaximumSubArrayGivenSum(int[] arr, int givenSum){
        int n = arr.length;
        for(int i = 0; i < n; i++){
            int temp = 0;
            for(int j = i + 1; j < n; j++){
                temp += arr[j];
                if(temp == givenSum){
                    return true;
                }
            }
        }
        return false;
    }


    private static boolean getSubArraySumUsingSlidingWindow(int[] arr, int givenSum){
        int n = arr.length;
        int start = 0;
        int current_sum = 0;
        for(int end = 0; end < n; end++){
            current_sum += arr[end];
            while(current_sum > givenSum){
                current_sum -= arr[start];
                start += 1;
            }
            if(current_sum == givenSum) {
                return true;
            }
        }
        return false;
    }
}
