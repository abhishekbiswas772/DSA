package Arrays;

public class LeftRotateByOne {

    private int[] leftRotateArray(int[] arr){
        int n = arr.length;
        int temp = arr[0];
        for(int i = 1; i < n; i++){
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
        return arr;
    }





}
