import java.util.Scanner;
class factorial{
     static int fact(int n){
         if(n==0||n==1){
             return 1;
         }
         return n*fact(n-1);
     }
    public static void main(String[] args){
        int num,fact;
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the number");
        num=sc.nextInt();
         fact(num);
         System.out.println(" Factorial is "+fact(num));
        
        
        
    }
}