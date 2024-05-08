package Arrays;

public class MajorityCount {


    private static int getMajority(int[] arr, int x, int y){
        int n = arr.length;
        int count_X = 0;
        int count_Y = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == x){
                count_X += 1;
            }else if(arr[i] == y){
                count_Y += 1;
            }
        }

        if(count_Y == count_X){
            return Math.max(x, y);
        }
        if(count_X > count_Y){
            return x;
        }
        return y;
    }
}
