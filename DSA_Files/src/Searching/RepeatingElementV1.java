package Searching;

public class RepeatingElementV1 {

    // This is an O(N^2)
    private static int getRepeatingElementV1(int[] arr){
        int n = arr.length;
        for(int i = 0; i < n-1; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i] == arr[j]){
                    return arr[i];
                }
            }
        }
        return 0;
    }

    // this is an O(LogN)
    private static int getRepeatingElementV2(int[] arr){
        int n = arr.length;
        for(int i = 0; i < n-1; i++){
            if(arr[i] == arr[i+1]){
                return arr[i];
            }
        }
        return 0;
    }


    // This is an O(N) solution with O(N) Extra Space
    private static int getRepeatingElementV3(int[] arr){
        int n = arr.length;
        boolean[] temp = new boolean[n];
        for(int i = 0; i < n; i++){
            while(temp[i]){
                return arr[i];
            }
            temp[arr[i]] = true;
        }
        return 0;
    }


    // This is an O(N) solution and O(1) Solution With no modification
    // popular Algo "Floyd-Tortoise Cycle Algo"
    private static int getRepeatingElementV4(int[] arr){
        // +1 added for avoid self replicating loops if 0 present
        int slow = arr[0] + 1;
        int fast = arr[0] + 1;

        // STEP 1:
        // slow will move 1 link at time
        // fast will move 2 (double speed of slow) link at time
        // if they meet at one point ---> step 2 starts
        do {
            slow = arr[slow] + 1;
            fast = arr[arr[fast] + 1] + 1;
        }while(slow != fast);

        // Step 2:
        // fast will present in location in step 1;
        // slow is reset at first pos
        // both slow & fast move at same speed
        // the point they meet is the repeating element or cycle start element

        slow = arr[0] + 1;
        while(slow != fast){
            slow = arr[slow];
            fast = arr[fast];
        }
        return slow;
    }

}
