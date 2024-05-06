package Arrays;

public class EqulibriumPoint {


    private static boolean getBalanceCenterPoint(int[] arr){
        int n = arr.length;
        int left_sum = 0;
        int right_sum = 0;
        for(int i = 0; i < n; i++){

            for(int left = 0;  left < i; left++){
                left_sum += arr[left];
            }

            for(int right = i + 1; right < n; right++){
                right_sum += arr[i];
            }

            if(left_sum == right_sum){
                return true;
            }
        }
        return false;
    }


    private static boolean getBalanceCenterPointEff(int[] arr){
        int n = arr.length;
        int right_sum = arr[0];
        for(int i = 1; i < n; i++){
            right_sum += arr[i];
        }
        int left_sum = 0;
        for(int i = 0; i < n; i++){
            right_sum -= arr[i];
            if(right_sum == left_sum){
                return true;
            }
            left_sum += arr[i];
        }
        return false;
    }
}
