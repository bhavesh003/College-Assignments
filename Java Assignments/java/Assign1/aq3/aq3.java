import java.io.*;
public class aq3
{
 public static void main(String args[]) throws IOException
  {
   int a[]={2,4,6,8};
   int sum=0;
   for(int i=0;i<a.length;i++)
    {
     sum=sum+a[i];
    }
   System.out.println("Sum is "+sum);
   int temp=0;
    for(int i=0;i<a.length;i++)
     {
      for(int j=i+1;j<a.length;j++)
       {
        if(a[i]>a[j])
         {       
          temp=a[j];
          a[i]=a[j];
          a[j]=temp;
         }
       }
     }
   System.out.println("Ascending order is ");
   for(int i=0;i<a.length;i++)
    {
     System.out.println(a[i]+" "); 
    }
  }
}
