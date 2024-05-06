package Arrays;

public class MaximumConsecutiveOne {

    private static int getMaximumConsecutiveOne(int[] arr){
        int n = arr.length;
        int res = 0;
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = i + 1; j < n; j++){
                if(arr[j] == 1){
                    count += 1;
                }else {
                    break;
                }
            }
            res = Math.max(count, res);
        }
        return res;
    }

    private static int getMaxConsecutiveOneEff(int[] arr){
        int n = arr.length;
        int res = 0;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                count = 0;
            }else{
                count += 1;
                res = Math.max(count, res);
            }
        }
        return res;
    }
}
