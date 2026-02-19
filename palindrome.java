import java.util.Scanner;
class palindrome{
    public static void main(String[]args){
        String str,rev="";
        Scanner sc= new Scanner(System.in);
        System.out.println(" enter the word");
        str =sc.next();
         for(int i=str.length()-1;i>=0;i--){
              rev=rev+str.charAt(i);
         }
          System.out.println(rev);
         if(str==rev){
             System.out.println(" this is a palindrome");
         }
         else{
             System.out.println("it is not a palindrome");
         }
        
    }
}