public class Main {
    public static void evenShift(int[] arr, int start, int end, boolean isLeft) {
        int element = arr[start];
        if(isLeft) {
            start += 2;
            while (start < end ) {
                int temp = element;
                element = arr[start];
                arr[start] = temp;
                start += 2;
            }
        }
        else {
            start -= 2;
            while (start >= end) {
                int temp = element;
                element = arr[start];
                arr[start] = temp;
                start -= 2;
            }
        }
    }
    public static int oddShift(int[] arr, boolean isLeft, int len) {
        int start = len / 2;
        int element = arr[start];
        if(isLeft) {
            start -= 2;
            while (start >= 0) {
                int temp = element;
                element = arr[start];
                arr[start] = temp;
                start -= 2;
            }
        }
        else {
            start += 2;
            while (start < len) {
                int temp = element;
                element = arr[start];
                arr[start] = temp;
                start += 2;
            }
        }
        return element;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int len = arr.length;
        evenShift(arr, 1, len / 2, true);
        evenShift(arr, len - 2, (len / 2) + 1, false);
        int firstHalfOverriding = oddShift(arr, true, len);
        int secondHalfOverriding = oddShift(arr, false, len);
        arr[1] = secondHalfOverriding;
        arr[len - 2] = firstHalfOverriding;
        arr[len / 2] = 0;
        for(int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
}
