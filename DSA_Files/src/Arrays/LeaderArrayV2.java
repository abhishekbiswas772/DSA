package Arrays;

public class LeaderArrayV2 {

    private static void reverseArray(int[] arr, int low, int high){
        while(low < high){
            int temp = arr[low];
            arr[low] = arr[high];
            arr[low] = temp;


            low += 1;
            high -= 1;
        }
    }
    private static int getLeaderInArray(int[] arr){
        int n = arr.length;
        int current_max = arr[n-1];
        System.out.println(current_max);
        for(int i = n-2; i >=0; i--){
            if(arr[i] >= current_max){
                current_max = arr[i];
                System.out.println(arr[i]);
            }
        }
        return current_max;
    }


    private static void getLeaderInArrayBruteForce(int[] arr){
        int n = arr.length;
        boolean flag = false;
        for(int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] >= arr[i]) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                System.out.println(arr[i]);
            }
        }
    }
}
