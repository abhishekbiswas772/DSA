package Arrays;

import java.util.ArrayList;

public class MaxAndSecondMax {

    private static ArrayList<Integer> getMaxAndSecondMax(int[] arr){
        int largest = 0;
        int second_largest = -1;
        ArrayList<Integer> result = new ArrayList<>();
        int n = arr.length;
        for(int i = 0; i < n; i++){
            if (arr[i] > arr[largest]){
                second_largest = largest;
                largest = i;
            }else if (arr[i] != arr[largest]){
                if(second_largest == - 1 || arr[i] > arr[second_largest]){
                    second_largest = arr[i];
                }
            }
        }


        int maxVal = 0;
        for(int i = 0; i < n; i++){
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }


        result.add(arr[maxVal]);
        if(second_largest == -1){
            result.add(-1);
        }else{
            result.add(arr[second_largest]);
        }
        return result;
    }
    
    
}
