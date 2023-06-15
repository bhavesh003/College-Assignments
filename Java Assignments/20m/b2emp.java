import java.util.*;
public class b2emp {
    int id;
    String name;
    float salary;
    public void getdata(){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter employee id-name-salary:");
        id=sc.nextInt();
        System.out.println("Enter employee name :");
        name=sc.next();
        System.out.println("Enter employee salary :");
        salary=sc.nextFloat();
    }
    public void display(){
        System.out.println("Employee id : "+id);
        System.out.println("Enter employee name is :"+name);
        System.out.println("Enter employee salary is :"+salary);
    }
    public static void main(String args[]){
        b2emp b2[]=new b2emp[n];
        for(int i=0;i<n;i++){
            b2[i]=new b2emp();
            b2[i].getdata();
        }
        System.out.println("\n***The data entered as follows***\n");
        for(int i=0;i<n;i++){
            b2[i].display();
        System.out.println();
        }
    }
}
