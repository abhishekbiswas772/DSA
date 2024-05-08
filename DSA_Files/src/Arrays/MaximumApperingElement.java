package Arrays;

public class MaximumApperingElement {

    // This is O(N^2) solution
    private static int getMaxAppearingElement(int[] left, int[] right){
        int left_n = left.length;
        int right_n = right.length;
        int[] freq = new int[100];
        if (left_n == right_n) {
            return -1;
        }
        for(int i = 0; i < left_n; i++){
            for(int k = left[i];  k <= right[i]; i++){
                freq[k] += 1;
            }
        }

        int current_max = 0;
        for(int i = 0; i < freq.length; i++){
            if(freq[i] > freq[current_max]){
                current_max = i;
            }
        }
        return current_max;
    }



    private static int getMaximumApperingElement(int[] left, int[] right){
        int nLeft = left.length;
        int nRight = right.length;
        if(nLeft == nRight){
            return -1;
        }
        int[] freq = new int[100];
        for(int i = 0; i < nLeft; i++){
            freq[left[i]] += 1;
            freq[right[i] + 1] -= 1;
        }

        int current_max = 0;
        for(int i = 1; i < nLeft; i++){
            freq[i] = freq[i - 1] + freq[i];
            if(freq[i] > freq[current_max]){
                current_max = i;
            }
        }
        return current_max;
    }


}
