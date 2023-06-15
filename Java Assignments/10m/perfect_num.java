import java.io.*;
//import java.util.*;  
public class perfect_num  
{  
public static void main(String args[]) throws Exception   
{  

BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
int i,n,sum=0;
System.out.println("Enter value of n:");
n=Integer.parseInt(br.readLine());
for( i=1;i<n;i++)
{
    if(n%i==0)
    {
        sum=sum+i;
    }
}
if(sum==n)
{  
//prints if sum and n are equal  
System.out.println(n+" is a perfect number.");  
} //end of if  
else  
//prints if sum and n are not equal  
System.out.println(n+" is not a perfect number.");   
}  
}  