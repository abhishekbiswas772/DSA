package Arrays;
import java.util.ArrayList;

public class StrongNeighbour {

    private static void getStrongNeighbour(int[] arr){
        int n = arr.length;
        ArrayList<Integer> tempArray = new ArrayList<>();
        for(int i = 1; i < n; i++){
            int res = Math.max(arr[i], arr[i - 1]);
            tempArray.add(res);
        }

        for(int i = 0; i < tempArray.size(); i++){
            System.out.println(tempArray.get(i));
        }
    }
}
