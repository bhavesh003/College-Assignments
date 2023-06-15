import java.util.*;
public class b2employee {
    String name;
    float salary;
    public void getdata(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter employee name :");
        name=sc.next();
        System.out.println("Enter employee salary :");
        salary=sc.nextFloat();
    }
    public void display(){
        System.out.println("Enter employee name is :"+name);
        System.out.println("Enter employee salary is :"+salary);
    }
    public static void main(String args[]){
        b2employee b2[]=new b2employee[3];
        for(int i=0;i<3;i++){
            b2[i]=new b2employee();
            b2[i].getdata();
        }
        System.out.println("\n***The data entered as follows***\n");
        for(int i=0;i<3;i++){
            b2[i].display();
        System.out.println();
        }
    }
}
