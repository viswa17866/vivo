import java.util.Scanner;
class stringbuilder{
    public static void main (String[]args){
        Scanner sc= new Scanner(System.in);
        String str=sc.nextLine();
        StringBuilder sv=new StringBuilder(str);
        sv.reverse();
        System.out.println(sv.reverse());


    }
}