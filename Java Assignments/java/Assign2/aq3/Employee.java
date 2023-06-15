import java.io.*;
import java.util.*;
public class Employee
{
 String name;
 double salary;
 Scanner sc=new Scanner(System.in);
 public void getInfo()
 {
  System.out.println("Enter Name: ");
  name=sc.next();
  System.out.println("Enter Salary: ");
  salary=sc.nextDouble();
 }
 public void disInfo()
 {
  System.out.println("Name of Employee: "+name);
  System.out.println("Salary of Employee: "+salary);
 }
 public static void main(String args[])
 {
  Employee obj[]=new Employee[5];
  for(int i=0;i<5;i++)
  {
   obj[i]=new Employee();
   obj[i].getInfo();
  }
  for(int i=0;i<5;i++)
  {
   obj[i].disInfo();
  }
 }
}
