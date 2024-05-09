package Arrays;

public class MaxmiumOccuredElement {
    private static int maxOccurenc(int[] left, int[] right){
        int[] freq = new int[1000000];
        int n_left = left.length;
        int n_right = right.length;
        for(int i = 0; i < n_left; i++){
            freq[left[i]] += 1;
            freq[right[i] + 1] -= 1;
        }

        int current_max = freq[0];
        int current_index = 0;
        for(int i = 1;  i <= freq.length; i++){
            freq[i] = freq[i - 1] + freq[i];
            if(freq[i] > current_max){
                current_index = i;
                current_max = freq[i];
            }
        }
        return current_index;
    }
}
