package Searching;

public class SquareRoot {
    private static int getSquareRoot(int x){
        int i = 0;
        while(i * i <= x){
            i += 1;
        }
        return (i-1);
    }


    private static int getSquareRootEffV1(int x){
        int low = 1;
        int high = x;
        int root = -1;
        while(low <= high){
            int mid = (low + high)/2;
            int sq_mid = mid * mid;
            if(sq_mid == x){
                return mid;
            }else if(sq_mid > mid){
                high = mid - 1;
            }else if(sq_mid < mid){
                low = mid + 1;
                root = mid;
            }
        }
        return root;
    }
}
