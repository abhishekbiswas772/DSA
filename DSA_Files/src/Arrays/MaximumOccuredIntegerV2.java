package Arrays;

public class MaximumOccuredIntegerV2 {
    private static int getMaxOccuredIntergerV2(int[] left, int[] right){
        int n_left = left.length;
//        int n_right = right.length;

        int[] freq = new int[10000];
        for(int i = 0; i < n_left; i++){
            freq[left[i]] += 1;
            freq[right[i] + 1] -= 1;
        }

        int current_index = 0;
        for(int i = 1; i <= 10000; i++){
            if(freq[i] > freq[current_index]){
                current_index = i;
            }
        }
        return current_index;
    }
}
