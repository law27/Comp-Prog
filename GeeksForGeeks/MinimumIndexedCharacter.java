import java.util.HashMap;

class Solution {
    public static String printMinIndexChar(String S, String patt) {
        HashMap<Character, Integer> map = new HashMap<>();
        for(int i = 0; i < S.length(); i++) {
            if(map.get(S.charAt(i)) == null) {
                map.put(S.charAt(i), i);
            }
        }
        int found = -1;
        char value = '$';
        for(char i : patt.toCharArray()) {
            Integer index = map.get(i);
            if(index != null) {
                if(found == -1 || index.intValue() < found) {
                    found = index;
                    value = i;
                }
            }
        }
        return String.valueOf(value);
    }
}

public class Main {
    public static void main (String[] args) {
        System.out.println(Solution.printMinIndexChar("anskg", "me"));
    }
}
