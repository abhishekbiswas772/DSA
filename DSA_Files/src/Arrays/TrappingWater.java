package Arrays;

public class TrappingWater {
    private static int trappingWater(int[] arr){
        int n = arr.length;
        int res = 0;
        for(int i = 1; i < n-1; i++){
            int left_max = arr[i];
            for(int j = 0; j < i; i++){
                left_max += arr[i];
            }
            int right_max = arr[i];
            for(int k = i + 1; k < n; i ++){
                right_max += arr[k];
            }
            res = res + (Math.min(left_max, right_max) - arr[i]);
        }
        return res;
    }


    private static int trappingWaterEff(int[] arr){
        int n = arr.length;
        int[] left = new int[n];
        int[] right = new int[n];

        left[0] = arr[0];
        for(int i = 1; i < n; i++){
            left[i] = Math.max(left[i-1], arr[i]);
        }

        right[n-1] = arr[n-1];
        for(int i = n-2; i >= 0; i--){
            right[i] = Math.max(arr[i + 1], arr[i]);
        }

        int res = 0;
        for(int i = 1; i < n-1; i++){
            res = res + (Math.min(left[i], right[i]) - arr[i]);
        }
        return res;
    }



}
