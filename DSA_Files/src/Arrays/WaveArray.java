package Arrays;

public class WaveArray {


    private static void getWaveTypeArray(int[] arr){
        int n = arr.length;
        for(int i = 0; i < n-1;  i+=2){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = arr[i];
        }

        for(int i = 0; i < n; i++){
            System.out.println(arr[i]);
        }
    }
}
