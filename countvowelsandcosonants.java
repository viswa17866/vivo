import java.util.Scanner;
class countvowelsandconsonants{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a word to count v/c:");
        String word=sc.next();
         int vowels=0;
         int consonants=0;
         word= word.toLowerCase();
         for(int i=0;i<word.length();i++){
             char ch=word.charAt(i);
             if(ch>='a'&&ch<='z'){
                 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                     vowels++;
                 }
                 else{
                     consonants++;
                 }
             }
         }
         System.out.println("vowels: "+vowels);
         System.out.println("consonants: "+consonants);
         sc.close();
    
    }
}