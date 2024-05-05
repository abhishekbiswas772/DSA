package Arrays;

public class CheckRotate {


    private static boolean checkRotateArray(int[] arr){
        int n = arr.length;
        for(int i = 1; i < n; i ++){
            if (arr[i] < arr[i-1]){
               return false;
            }
        }
        return true;
    }

    private static boolean checkArrayRotateNaive(int[] arr){
        int n = arr.length;
        for(int i = 0 ; i < n; i++){
            for(int j = i+1; j < n-1; j++){
                if(arr[i] > arr[j]){
                    return false;
                }
            }
        }
        return true;
    }
}
