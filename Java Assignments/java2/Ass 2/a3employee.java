import java.util.*;
class a3employee{
 private int id;
 double salary;
 String name;
 public a3employee(){
  id=0;
  salary=0.0;
  name=""; 
 }
 public void accept(){
  Scanner sc=new Scanner(System.in);
  System.out.print("Enter employee id-name-salary:");
  id=sc.nextInt();
  name=sc.next();
  salary=sc.nextDouble();
}
public void display(){
 System.out.println("***Details of employees***");
 System.out.println("Employee id : "+id);
 System.out.println("Employee name : "+name);
 System.out.println("Employee salary :"+salary);
}
 public double salary(){
   return salary;
 }
 public static void main(String args[]){
   System.out.print("Enter the number of employees:");
   Scanner sc=new Scanner(System.in);
   int n=sc.nextInt();
  Manager m[]=new Manager[n];
  for(int i=0;i<n;i++){
   m[i]=new Manager();
   m[i].accept();
  }
  for(int i=0;i<n;i++){
   m[i].display();
   System.out.println("******************************************************");
  }
  int ans=Manager.max(m,n);
  m[ans].display();
 }
}
class Manager extends a3employee{
 private double bonus;
 public void accept(){
   super.accept();
   Scanner sc=new Scanner(System.in);
   System.out.print("Enter bonus of the employee :");
   bonus=sc.nextDouble();
  }
  public void display(){
    super.display();
    System.out.println("Employee bonus is : "+bonus);
   }
  
  public static int max(Manager m[],int n){
    double total=0;
    int temp=0;
    for(int i=0;i<n;i++){
      if(total<(m[i].salary()+m[i].bonus)){
      total=m[i].salary()+m[i].bonus;
      temp=i;
    }
}
System.out.println("Total maximum salary is  = "+total);
  return temp;
}
}



