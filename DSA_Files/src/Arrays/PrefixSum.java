package Arrays;

public class PrefixSum {

    private static int getSumFromStartingAndEndingIndex(int start, int end, int[] arr){
        int curren_sum = 0;
        for(int i = start; i < end; i++){
            curren_sum += arr[i];
        }
        return curren_sum;
    }



    private static int[] preprocessArray(int[] arr){
        int n = arr.length;
        int[] temp = new int[n];
        for(int i = 1; i < n; i++){
            arr[i] = arr[i] + arr[i - 1];
        }
        return temp;
    }


    // This is program for prefix Sum After Preprocessing of array
    private static int getSumFromStartAndEndIndexAfter(int[] arr, int start, int end){
        int[] preprocessArray = preprocessArray(arr);
        if(start == 0){
            return arr[end];
        }
        return arr[end] - arr[start - 1];
    }




}
