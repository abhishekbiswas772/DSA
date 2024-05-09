package Searching;

public class CountOneRepeated {
    static class Pair{
        long x;
        long y;

        Pair(long x, long y){
            this.x = x;
            this.y = y;
        }
    }

    public static Pair findRepeating(Long arr[],int n)
    {
        Pair _pair = new Pair(-1, -1);
        int low = 0;
        int high = n - 1;
        if( n == 0 ){
            return _pair;
        }
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= mid + arr[0]) {
                low = mid + 1;
            } else {
                high = mid + 1;
            }
        }

        long freq = n - (arr[n - 1] - arr[0]);
        if(freq > 1){
            _pair.x = arr[low];
            _pair.y = freq;
        }
        return _pair;

    }
}
