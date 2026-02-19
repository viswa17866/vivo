import java.util.Arrays;
class thridlargestnumber{
    public static void main(String[] args){
        int [] arr={10,2,5,23,45,23,46,90};
        Arrays.sort(arr);
        int n=arr.length;
        System.out.println(" third largest number is "+arr[n-3]);
    }
}