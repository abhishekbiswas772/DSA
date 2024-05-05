package Arrays;

public class RemoveDuplicate {

    private int[] removeDuplicateInplace(int[] arr){
        int n = arr.length;
        int res = 1;
        for(int i =1; i < n; i++){
            if(arr[i] != arr[res-1]){
                arr[res] = arr[i];
                res+=1;
            }
        }
        return arr;
    }


    private int[] removeDuplicateBruteForce(int[] arr){
        int n = arr.length;
        int[] temp = new int[n];
        temp[0] = arr[0];
        int res = 1;
        for(int i= 1; i < n; i++){
            if(arr[i] != temp[res - 1]){
                temp[res] = arr[i];
                res += 1;
            }
        }
        if (res >= 0) System.arraycopy(temp, 0, arr, 0, res);
        return arr;
    }


}
