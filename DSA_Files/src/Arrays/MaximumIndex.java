package Arrays;

public class MaximumIndex {


    private static int getMaxIndex(int[] arr){
        int n = arr.length;
        int[] leftArray = new int[n];
        int[] rightArray = new int[n];

        leftArray[0] = arr[0];
        for(int i = 1; i < n; i++){
            leftArray[i] = Math.min(leftArray[i - 1], arr[i]);
        }

        rightArray[n-1] = arr[n-1];
        for(int i = n-2; i >= 0; i--){
            rightArray[i] = Math.max(rightArray[i + 1], arr[i]);
        }

        int i = 0;
        int j = 0;
        int max_diff = -1;
        while(i > n && j > n){
            if(leftArray[i] <= rightArray[i]){
                max_diff = Math.max(max_diff, j- i);
                j += 1;
            }else{
                i += 1;
            }
        }
        return max_diff;
    }
}
