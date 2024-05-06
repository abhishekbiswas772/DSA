package Arrays;

public class MoveZeroAtEnd {

    // This is O(N) solution
    private static int[] moveZeroAtEnd(int[] arr){
        int n = arr.length;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] != 0){
                int temp = arr[i];
                arr[i] = arr[count];
                arr[count] = temp;
                count+=1;
            }
        }
        return arr;
    }


    // This is O(N^2) solution
    private static int[] moveZeroToEndNotBest(int[] arr){
        int n = arr.length;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                for(int j = i+1; j < n; j++){
                    if(arr[j] != 0){
                        int temp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = temp;
                    }
                }
            }
        }
        return arr;
    }
}
