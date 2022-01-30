import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Map<Integer, Integer> x = new HashMap<>();
        Map<Integer, Integer> y = new HashMap<>();
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i < 3; i++) {
            String[] values = sc.nextLine().split(" ");
            Integer one = Integer.parseInt(values[0]);
            Integer two = Integer.parseInt(values[1]);
            x.put(one, x.getOrDefault(one, 0) + 1);
            y.put(two, y.getOrDefault(two, 0) + 1);
        }
        int x1 = 0;
        for (var i : x.entrySet()) {
            if(i.getValue() < 2) {
                x1 = i.getKey();
            }
        }
        int y1 = 0;
        for (var i : y.entrySet()) {
            if(i.getValue() < 2) {
                y1 = i.getKey();
            }
        }
        System.out.println(x1 + " " + y1);
    }
}

