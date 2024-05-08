package Arrays;

public class RotateArrayV2 {
    private static void reverse(int[] arr, int low, int high){
        while(low < high){
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;

            low += 1;
            high -= 1
        }
    }


    private static void rotateArrayByDelement(int[] arr, int k){
        int n = arr.length;
        reverse(arr, 0 , k-1);
        reverse(arr, k, n-1);
        reverse(arr, 0, n-1);
    }
}
