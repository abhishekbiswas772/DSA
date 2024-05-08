package Arrays;

public class RearrangeArrayWithO1 {


    private static void getRearrangeArray(int[] arr){
        int n = arr.length;
        int[] temp = new int[n];
        for(int i = 0; i < n; i++){
            temp[i] = arr[arr[i]];
        }

        for(int j = 0; j < n; j++){
            arr[j] = temp[j];
        }
    }
}
