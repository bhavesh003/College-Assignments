import java.io.*;
import java.util.*;
import java.util.Scanner;
public class bq2
{
 public String name;
 public double salary;
 Scanner sc=new Scanner(System.in);
 public void getdata()
 {
  System.out.println("Enter Name: ");
  name=sc.next();
  System.out.println("Enter Salary: ");
  salary=sc.nextDouble();
 }
 public void display()
 {
  System.out.println("**********");
  System.out.println("Employee Detail");
  System.out.println("Name: "+name);
  System.out.println("Salary: "+salary);  
  System.out.println("**********");
 }
 public static void main(String args[])
 {
  bq2 e1[]=new bq2[3];
  for(int i=0;i<e1.length;i++)
  {  
   e1[i]=new bq2();
   e1[i].getdata();
   e1[i].display();
  }
 }
}
