package Arrays;

public class ReverseArrayInGroup {
    private static void reverseArray(int[] arr, int low, int high){
        int start = low;
        int end = high;
        while(low <= high){
            int temp = arr[end];
            arr[end] = arr[start];
            arr[start] = temp;
            low += 1;
            high -= 1;
        }
    }


    private static void reverseInGroup(int[] arr, int k){
        int n = arr.length;
        for(int i = 0; i < n; i++) {
            int start = i;
            int end = Math.min(i + k - 1, n-1);
            reverseArray(arr, start, end);
        }
    }
}
