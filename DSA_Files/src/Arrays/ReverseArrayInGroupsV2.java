package Arrays;

public class ReverseArrayInGroupsV2 {

    private static void reverseArray(int[] arr, int low, int high){
        while(low < high){
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;

            low += 1;
            high -= 1;
        }
    }


    private static void reverseInGroup(int[] arr, int k){
        int n = arr.length;
        for(int i = 0; i < n; i+=k){
            int start = i;
            int end = Math.min(i + k - 1, n-1);
            reverseArray(arr, start, end);
        }
    }

}
