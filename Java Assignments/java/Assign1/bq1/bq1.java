import java.io.*;
public class bq1
{
  public int a;
  public bq1()
  {
   a=0;
  }
  public bq1(int a)
  {
   this.a=a;
  }
  public boolean isNegative()
  { 
   if(a<0)
    return true;
   else return false;
  }
  public boolean isPositive()
  {
   if(a>0)
    return true;
   else return false;
  }
  public boolean isOdd()
  {
   if(a%2!=0)
    return true;
   else return false;
  }
  public boolean isEven()
  {
   if(a%2==0)
    return true;
   else return false;
  }
  public static void main(String args[]) throws IOException
  {
   int a=Integer.parseInt(args[0]);
   bq1 m = new bq1(a);
   if(m.isNegative())
    System.out.println("Negative Number");
   if(m.isPositive())
    System.out.println("Positive Number");
   if(m.isOdd())
    System.out.println("Odd Number");
   if(m.isEven())
    System.out.println("Even Number");
  }
}
