package Searching;

public class RoofTopProblem {

    private static int getMaxBuildingJumps(int[] arr){
        int n = arr.length;
        int count = 0;
        int res = 0;
        for(int i = 0; i < n-1; i++){
            if(arr[i + 1] > arr[i]){
                count += 1;
                res = Math.max(res, count);
            }else{
                count = 0;
            }
        }
        return count;
    }
}
