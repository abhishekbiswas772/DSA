package Arrays;

public class RotateArrayByD {

    // METHOD 1
    private static void leftRotateByOne(int[] arr){
        int n = arr.length;
        int temp = arr[0];
        for(int i = 1; i < n; i++){
            arr[i - 1] = arr[i];
        }
        arr[n-1] = temp;
    }

    private static void moveLeftByD(int[] arr, int k){
        for(int i = 0; i < k; i++){
            leftRotateByOne(arr);
        }
    }



    // METHOD 2 (EFF Solution)
    private static void reverse(int[] arr, int low, int high) {
        while (low < high) {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
    }

    private static void rotateArray(int[] arr, int d) {
        int n = arr.length;
        reverse(arr, 0, d - 1);
        reverse(arr, d, n - 1);
        reverse(arr, 0, n - 1);
    }


    // METHOD 3 (BETTER THEN METHOD 1)
    private static void leftRotate(int[] arr, int k){
        int n = arr.length;
        int[] temp = new int[n];

        for(int i = 0; i < k; i++){
            temp[i] = arr[i];
        }
        for(int i = k; i < n; i++){
            arr[i - k] = arr[i];
        }
        for(int i = 0; i < k; i++){
            arr[n - k + 1] = temp[i];
        }
    }

    public static void validateInputCase() {
        int[] arr = {1, 2, 3, 4, 5};
        int k = 2;
        rotateArray(arr, k);
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}


