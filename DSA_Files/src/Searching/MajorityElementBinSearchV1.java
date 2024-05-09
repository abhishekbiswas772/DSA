package Searching;

import java.util.Arrays;

public class MajorityElementBinSearchV1 {



    private static int getMajorityElement(int[] arr){
        int n = arr.length;
        int half= n / 2;
        if(n == 0){
            return arr[0];
        }
        Arrays.sort(arr);
        for(int i = 0; i < (half + 1); i++){
            if(arr[i] == arr[i + half]){
                return arr[i];
            }
        }
        return -1;
    }
}
