package Arrays;

public class LargestFraction {

    private static int gcd(int a, int b){
        if(b == 0){
            return a;
        }
        return gcd(b, a % b);
    }

    private static int[] getLargestFraction(int n, int d){
        int[] res = new int[2];
        int num = 0;
        int deno = 1;

        for(int q = 10000; q >= 2; q--){
            int p = (n * q - 1)/d;
            if(p * deno >= q*num){
                deno = q;
                num = p;
            }
        }

        int gcd = gcd(num, deno);
        res[0] = num/gcd;
        res[1] = deno/gcd;
        return res;
    }
}
