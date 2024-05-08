package Arrays;

public class EqulibriumPointv2 {


    private static int getEqulibriumPoint(int[] arr){
        int n = arr.length;
        int right_sum = 0;
        for(int i = 0; i < n; i++){
            right_sum += arr[i];
        }

        int left_sum = 0;
        for(int i = 0; i < n; i++){
            right_sum -= arr[i];
            if(left_sum == right_sum){
                return i;
            }
            left_sum += arr[i];
        }
        return -1;
    }
}
