package Arrays;

import java.util.Arrays;

public class MeanMedianArray {


    private static void getMeanMediumArray(int[] arr){
        int n = arr.length;
        int mean = 0;
        for(int i = 0; i < n; i++){
            mean += arr[i];
        }
        mean = (int)(mean / 2);
        System.out.println("Mean" + mean);
        int current_median = 0;
        Arrays.sort(arr);
        if (n % 2 != 0){
            current_median = arr[n/2];
            System.out.println("Median" + current_median);
        }else {
            int res = n/2;
            int res_second = res - 1;
            current_median = (arr[res] + arr[res_second]) / 2;
            System.out.println("Median" + current_median);
        }
    }
}
