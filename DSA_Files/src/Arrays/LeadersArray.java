package Arrays;

public class LeadersArray {

    private static void findLeaders(int[] arr){
        int n = arr.length;
        boolean flag = false;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i] <= arr[j]){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                System.out.println(arr[i]);
            }
        }
    }


    private static void findLeadersEff(int[] arr){
        int n = arr.length;
        int curr_leader = arr[n-1];
        System.out.println(curr_leader);
        for(int i = n-2; i >=0; i--){
            if(curr_leader < arr[i]){
                curr_leader = arr[i];
                System.out.println(curr_leader);
            }
        }
    }
}
