package Arrays;
import static java.lang.Math.min;
import static java.lang.Math.max;

public class MaxDifference {

    private static int getMaxDifference(int[] arr){
        int n = arr.length;
        int res = arr[1] - arr[0];
        for(int i = 0; i < n; i++){
            for(int j = 1; j < n; j++){
                res = max(res, arr[j] - arr[i]);
            }
        }
        return res;
    }


    private static int getMaxDifferenceEff(int[] arr){
        int n = arr.length;
        int res = arr[1] - arr[0];
        int minVal = arr[0];
        for(int i = 1; i < n; i++){
            res = max(res, arr[i] - minVal);
            minVal = min(minVal, arr[i]);
        }
        return res;
    }

}
