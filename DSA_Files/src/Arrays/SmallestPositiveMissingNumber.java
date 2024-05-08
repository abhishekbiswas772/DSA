package Arrays;

public class SmallestPositiveMissingNumber {



    private static int getSmallestPositiveMissingNumber(int[] arr) {
        int[] temp = new int[arr.length];
        int n = arr.length;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                temp[arr[i]] = 1;
            }
        }

        for(int i = 1; i < temp.length; i++){
            if(temp[i] == 0){
                return i;
            }
        }

        return -1;
    }
}
