package Arrays;

public class MaximumSubArraySumPos {

    private static int getMaximumSubArraySum(int[] arr){
        int n = arr.length;
        int res = arr[0];
        for(int i = 0; i < n; i++){
            int temp = 0;
            for(int j = i; j < n; j++){
                temp += arr[j];
                res = Math.max(res, temp);
            }
        }
        return res;
    }


    private static int getMaximumSubArrayEff(int[] arr){
        int n = arr.length;
        int res = arr[0];
        int maxSoFar = arr[0];
        for(int i = 1;  i < n; i++){
            maxSoFar = Math.max(maxSoFar + arr[i], arr[i]);
            res = Math.max(maxSoFar, res);
        }
        return res;
    }

}
