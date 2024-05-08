package Arrays;

public class CheckArraySortedRotated {


    private static boolean getCheckArraySortedRotated(int[] arr){
        int n = arr.length;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > arr[i+1]){
                count += 1;
            }
        }
        if(count == 1 && arr[0] > arr[n-1]){
            return true;
        }
        return false;
    }



}
