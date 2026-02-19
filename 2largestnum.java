import java.util.Arrays;
class SecondLargest {  
      public static void main(String[] args) {
        int[] arr = {10, 5, 20, 8, 25, 15};
        Arrays.sort(arr);
        int n = arr.length;
        System.out.println("Second largest number is: " + arr[n - 2]);
    }
}
