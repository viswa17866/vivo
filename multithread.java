
 class MyThread1 extends Theard{
    void run(){
    for(int i=1;i<=5;i++){
        System.out.println("thread executing"+i);
    }
 }
 }

 class MyThread2 extends Theard{
  void run(){
    for(int i=6;i<=10;i++){
        System.out.println("thread executing"+i);
    }
 }
 }
public class multithread {
    public static void main(String [] args){
        MyThread1  t1= new MyThread1();
        MyThread2 t2=new MyThread2();
        t1.run();
        t2.run();

    }

    
    
}
