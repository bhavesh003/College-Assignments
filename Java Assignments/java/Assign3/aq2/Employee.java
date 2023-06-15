import java.io.*;
import java.util.*;
class Employee
{
 public static void main(String args[]) throws Exception
 {
  BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
  Hashtable ht=new Hashtable();
  float sal;
  String name=null;
  System.out.println("Enter No of Employee: ");
  int n=Integer.parseInt(br.readLine());
  for(int i=0;i<n;i++)
  {
   System.out.println("Enter Employee Name: ");
   name=br.readLine();
   System.out.println("Enter Employee Salary: ");
   sal=Float.parseFloat(br.readLine());
   ht.put(name,sal);
  }
  System.out.println("Hash Table: "+ht);
  Enumeration k=ht.keys();
  Enumeration v=ht.elements();
  System.out.println("Name\tSalary");
  while(k.hasMoreElements())
  {
   System.out.println(k.nextElement()+"\t"+v.nextElement());
  }
  System.out.println("Enter Name to be Searched: ");
  String snm=br.readLine();
  k=ht.keys();
  v=ht.elements();
  int cnt=0;
  while(k.hasMoreElements())
  {
   name=(String)k.nextElement();
   if(snm.equals(name))
   {
    cnt++;
    System.out.println("Salary: "+v.nextElement());
   }
  }
  if(cnt==0)
  {
   System.out.println("Employee Not Found.");
  } 
 }
}
