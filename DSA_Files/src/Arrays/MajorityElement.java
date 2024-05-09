package Arrays;

public class MajorityElement {
    private static int findMajorityElement(int[] arr){
        int n = arr.length;
        for(int i = 0; i < n; i++){
            int count = 1;
            for(int j = i+1; j < n; j++){
                if(arr[i] == arr[j]){
                    count += 1;
                }
            }
            if(count < n/2){
                System.out.println(arr[i]);
            }
        }
        return -1;
    }


    // This program is also called "Moore Voting Algorithm"
    private static int findProbaleCandidateForMajority(int[] arr){
        int n = arr.length;
        int res = 0;
        int count = 1;
        // 0(N)
        for(int i = 1; i < n; i++){
            if(arr[res] == arr[i]){
                count += 1;
            }else {
                count -= 1;
            }

            if(count == 0){
                res = i;
                count  = 1;
            }
        }
        count = 0;
        // o(N)
        for(int i = 0; i < n; i++){
            if(arr[res] == arr[i]){
                count++;
            }
        }
        if(count < n/2){
            return -1;
        }
        return res;
    }
}
