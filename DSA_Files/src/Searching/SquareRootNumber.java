package Searching;

public class SquareRootNumber
{
    private static int getSquareRoot(int x){
        int low = 0;
        int high = x;
        int ans = -1;
        while(low <= high){
            int mid = (low + high)/2;
            int sqMid = mid * mid;
            if(sqMid == x){
                return x;
            } else if (sqMid > x) {
                high = mid - 1;
            }else if (sqMid < x){
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
}
