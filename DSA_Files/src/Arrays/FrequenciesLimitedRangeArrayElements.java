package Arrays;

import java.util.Arrays;

public class FrequenciesLimitedRangeArrayElements {

    private static int[] getFreqLimitedRangeArrayElement(int[] arr){
        int n = arr.length;
        int i;
        int j;
        for(i =0; i< n;){
            if(arr[i] > 0 && arr[i] < n){
                j = arr[i] - 1;
                if(arr[j] <= 0) {
                    arr[i] = 0;
                    arr[j]--;
                    i++;
                }else{
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                    arr[j] = -1;
                }
            }else if(arr[i] < 0){
                arr[i] = 0;
                i++;
            }else{
                i++;
            }
        }


        for(int k = 0; k < n; k++){
            arr[k] = -arr[k];
        }
        return arr;
    }
}
