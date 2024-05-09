package Searching;

public class CountOccurrencesSortedArray {

    private static int getFirstOccurrenceSortedArrayV1(int[] arr, int x){
        int low = 0;
        int high = arr.length-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] > x){
                high = mid - 1;
            }else if(arr[mid] < x){
                low = mid + 1;
            }else{
                if(mid == 0 || arr[mid] != arr[mid - 1]){
                    return mid;
                }else{
                    high = mid - 1;
                }
            }
        }
        return -1;
    }


    private static int getLastOccurrenceSortedArrayV1(int[] arr,int x){
        int low = 0;
        int high = arr.length - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] > x){
                high = mid - 1;
            }else if(arr[mid] < x){
                low = mid + 1;
            }else{
                if(mid == n-1 || arr[mid + 1] != arr[mid]){
                    return mid;
                }else{
                    low = mid + 1;
                }
            }
        }
        return -1;
    }

    private static int getCountOccurrencesSortedArray(int[] arr, int x){
        int firstOccurrences = getFirstOccurrenceSortedArrayV1(arr, x);
        if(firstOccurrences == -1){
            return 0;
        }
        return (getLastOccurrenceSortedArrayV1(arr, x) - firstOccurrences) + 1;
    }
}
