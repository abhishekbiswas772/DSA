package Arrays;

public class MaxSubArrayOddEven {

    private static int getMaxOddEvenSubArray(int[] arr){
        int n = arr.length;
        int max_so_far = 1;
        int current_max = 1;
        for(int i = 1; i < n; i++){
            if((arr[i] % 2 == 0 && arr[i-1] % 2 != 0) || (arr[i] % 2 !=0 && arr[i-1] % 2 == 0)){
                current_max += 1;
                max_so_far = Math.max(current_max, max_so_far);
            }else{
                current_max = 1;
            }
        }
        return max_so_far;
    }



    private static int getMaximumOddEvenSubArrayThing(int[] arr){
        int n = arr.length;
        int res = 1;
        for(int i = 0; i < n; i++){
            int curr = 1;
            for(int j = i+1; j < n; j++){
                if((arr[j] % 2 == 0 && arr[j-1] % 2 != 0) && (arr[j] % 2 != 0 && arr[j-1] % 2 == 0)){
                    curr+=1;
                }else{
                    break;
                }
            }
            res = Math.max(res, curr);
        }
        return res;
    }



}
