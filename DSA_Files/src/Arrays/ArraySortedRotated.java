package Arrays;

public class ArraySortedRotated {

    private static boolean checkArraySortedAndRotated(int[] arr){
        int n = arr.length;
        int count = 0;
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                count += 1;
            }
        }
        if((count == 1) && (arr[n-1] < arr[0])){
            return true;
        }
        return false;
    }
}
