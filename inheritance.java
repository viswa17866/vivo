class book{
    void display(){
        int a=10;
        int b=20; 
        int c=a+b;
        System.out.println("Book details "+c);
    }
}
class title extends book{
  void display1(){
      String a="Apti";
      String b="tude";
      String c=a+b;
      System.out.println("Title of the book "+c);
  }
}
class author extends book{
    void display2(){
        String name="John Doe"; 
        System.out.println("Author of the book "+name);
    }
   public static void main(String [] args){
        book a1=new book();
        a1.display();
        title a2=new title();
        a2.display1();
        author a3=new author();
        a3.display2();



   }
}