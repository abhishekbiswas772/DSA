package Arrays;

public class ArrayInserts {

    private static void insertAtEnd(int[] arr, int element) {
        int n = arr.length;
        arr[n - 1] = element;
    }


    private static void insertAtAnyIndex(int[] arr, int element, int index){
        int n = arr.length;
        for(int i = n-1; i > index; i--){
            arr[i] = arr[i-1];
        }
        arr[index] = element;
    }
}
