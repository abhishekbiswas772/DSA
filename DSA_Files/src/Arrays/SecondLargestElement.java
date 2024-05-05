package Arrays;

public class SecondLargestElement {


    private static int getLargestElement(int[] arr){
        int res = 0;
        int n = arr.length;
        for(int i= 0; i < n; i++){
            if(arr[i] > arr[res]){
                res = i;
            }
        }
        return res;
    }


    private static int findSecondLargestElement(int[] arr){
        int n = arr.length;
        int res = -1;
        int largest = getLargestElement(arr);
        for(int i = 0; i < n; i++){
            if(arr[i] != arr[largest]){
                if(res == -1){
                    res = i;
                }else if (arr[i] > arr[res]){
                    res = i;
                }
            }
        }
        return res;
    }


    private static int findSecondLargestElementBest(int[] arr){
        int n = arr.length;
        int res = -1;
        int largest = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > arr[largest]){
                res = largest;
                largest = i;
            }else if (arr[i] != arr[largest]){
                if(res == -1 || arr[i] > arr[res]){
                    res = i;
                }
            }
        }
        return res;
    }


}
