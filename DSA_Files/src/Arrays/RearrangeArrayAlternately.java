package Arrays;

public class RearrangeArrayAlternately {


    private static void getRearrangeArrayAlter(int[] arr){
        int n = arr.length;
        int[] temp = new int[n];
        boolean flag = true;
        int low = 0;
        int high = n-1;
        for(int i = 0; i < n; i++){
            if(flag){
                temp[i] = arr[high];
                high -= 1;
            }else{
                temp[i] = arr[low];
                low += 1;
            }
            flag = !flag;
        }
    }
}
