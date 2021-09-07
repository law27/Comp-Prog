import java.util.Stack;

class Solution {
    public String reverse(String s) {
        Stack<Character> st = new Stack<>();
        for(char i : s.toCharArray()) {
            st.push(i);
        }
        StringBuilder builder = new StringBuilder();
        while(!st.empty()) {
            builder.append(st.peek());
            st.pop();
        }
        return builder.toString();
    }
}


public class ReverseUsingStack {
    public static void main (String[] args) {
        System.out.println(new Solution().reverse("Hello World"));
    }
}
