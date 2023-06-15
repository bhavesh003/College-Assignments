import java.io.*;
import java.util.*;
public class aq4
{
   public int dd;
   public int mm;
   public int yy;
   public aq4()
   {
  
   }
   public aq4(int dd, int mm, int yy)
   {
    this.dd=dd;
    this.mm=mm;
    this.yy=yy;
   }
   public void display()
   {
    System.out.println("Date: " +dd+"-"+mm+"-"+yy);
   }
   public static void main(String args[]) throws Exception
   {
    aq4 m1= new aq4();
    aq4 m2= new aq4(8,12,2002);
    m2.display();
   } 
}
