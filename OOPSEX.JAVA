class OOPEX {

    String name;
    int age;

    OOPEX(String name, int age){
        this.name = name;
        this.age = age;
    }

    void display(){
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        OOPEX s1 = new OOPEX("John", 20);
        s1.display();
    }
}
