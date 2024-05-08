package Arrays;

public class KadaneAlgoV2 {


    private static int kadaneAlgoSimulate(int[] arr){
        int n = arr.length;
        int max_so_far = 0;
        int current_max = 0;
        for(int i = 0; i < n; i++){
            current_max += arr[i];
            if(current_max > max_so_far){
                max_so_far = current_max;
            }
            if(current_max < 0){
                current_max = 0;
            }
        }
        return max_so_far;
    }
}
