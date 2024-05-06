package Arrays;

public class FrequencySortedArray {

    private static void findFreqInSortedArray(int[] arr){
        int n = arr.length;
        int freq = 1;
        int i = 1;
        while(i < n){
            while(i < n && arr[i-1] == arr[i]){
                freq += 1;
                i+=1;
            }
            System.out.println(arr[i] + " " + freq);
            i+=1;
            freq = 1;
        }
        if(n == 1 || arr[n-1] == arr[n-2]){
            System.out.println(arr[n-1] + " " + freq);
        }
    }
}
