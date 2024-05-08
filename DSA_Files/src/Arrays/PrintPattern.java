package Arrays;

import java.util.ArrayList;

public class PrintPattern {

    private static void getDepths(int n, ArrayList<Integer> res){
        if(n <= 0){
            res.add(n);
            return ;
        }
        res.add(n);
        n = n - 5;
        getDepths(n, res);
        n = n + 5;
        res.add(n);
    }


    private static ArrayList<Integer> getPattern(int n){
        ArrayList<Integer> result = new ArrayList<>();
        getDepths(n, result);
        return result;
    }
}
