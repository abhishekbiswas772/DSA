package Searching;

public class SearchInfinateSizeArray {

    private static int performSearchInInfSizeArrayV1(int[] arr, int x){
        int i = 0;
        while(true){
            if(arr[i] == x){
                return i;
            }
            if(arr[i] > x){
                return -1;
            }
            i++;
        }
    }

    private static int performBinSearch(int[] arr, int low, int high, int x){
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == x){
                return mid;
            }else if(arr[mid] > x){
                high = mid - 1;
            }else if(arr[mid] < x){
                low = mid + 1;
            }
        }
        return -1;
    }

    private static int performSearchInINFSizeArray(int[] arr, int x){
        if(arr[0] == x){
            return 0;
        }
        int i = 1;
        while (arr[i] < x){
            i = i * 2;
        }
        if(arr[i] == x){
            return i;
        }
        return performBinSearch(arr, (i/2 + 1), i - 1, x);
    }
}
