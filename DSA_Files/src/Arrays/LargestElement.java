package Arrays;

public class LargestElement {

    private static int largestElement(int[] arr) {
        int n = arr.length;
        for(int i=0 ; i < n; i++){
            boolean flag = true;
            for(int j = 0; j < n; j++){
                if(arr[j] > arr[i]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                return i;
            }
        }
        return -1;
    }


    private static int largestElementBestSolution(int[] arr){
        int n = arr.length;
        int res = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > arr[res]){
                res = i;
            }
        }
        return res;
    }


}
