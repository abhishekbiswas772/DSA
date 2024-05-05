package Arrays;

public class RotateArray {

    private static int[] getRotateArrayWhole(int[] arr){
        int n = arr.length;
        int low = 0;
        int high = n-1;
        while(low < high){
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low+=1;
            high-=1;
        }
        return arr;
    }
}
