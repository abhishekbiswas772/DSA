package Arrays;

public class kandaneAlgo {

    // Universal Way Of Writing KadaneAlgo
    private static int kadaneAlgo(int[] arr){
        int n = arr.length;
        int current_max = Integer.MIN_VALUE;
        int max_so_far = 0;
        for(int i = 0; i< n; i++){
            max_so_far += arr[i];
            if(max_so_far > current_max){
                current_max = max_so_far;
            }
            if(max_so_far < 0){
                max_so_far = 0;
            }
        }
        return current_max;
    }


    //My Way
    private static int kadaneAlgo2ndWay(int[] arr){
        int n = arr.length;
        int current_max = arr[0];
        int max_so_far = arr[0];
        for(int i = 1; i < n; i++){
            max_so_far = Math.max(max_so_far + arr[i], arr[i]);
            current_max = Math.max(max_so_far, current_max);
        }
        return current_max;
    }
}
