import java.util.HashMap;

public class FrequencyCheck {
    public static void main(String[] args) {

        int[] arr = {1, 2, 3, 2, 4, 1, 1};

        HashMap<Integer, Integer> map = new HashMap<>();

        for (int num : arr) {
            if (map.containsKey(num)) {
                map.put(num, map.get(num) + 1);
            } else {
                map.put(num, 1);
            }
        }

        System.out.println("Frequency of elements:");
        for (Integer key : map.keySet()) {
            System.out.println(key + " -> " + map.get(key));
        }
    }
}
