package Searching;

public class PeakElement {

    private static int naivePeakElementStarts(int[] arr){
        int n = arr.length;
        if (arr[0] >= arr[1]) {
            return arr[0];
        }
        if(arr[n-1] >= arr[n-2]){
            return arr[n-1];
        }

        for(int i = 1; i< n -1; i++){
            if((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1])){
                return arr[i];
            }
        }
        return -1;
    }

    private static int peakElement(int[] arr){
        int n = arr.length;
        int low = 0;
        int high = n-1;
        while (low <= high){
            int mid = (low + high)/2;
            if((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == n-1 || arr[mid] >= arr[mid + 1])){
                return mid;
            }else {
                if (mid > 0 && arr[mid - 1] >= arr[mid]){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
        }
        return -1;
    }
}
