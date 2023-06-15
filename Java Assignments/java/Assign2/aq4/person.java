import java.io.IOException;
import java.util.Scanner;
import utility.*;
public class person
{
 public static void main(String args[]) throws IOException
 {
  Scanner sc=new Scanner(System.in);
  String n;
  String city;
  System.out.println("Name: ");
  n=sc.nextLine();
  System.out.println("City: ");
  city=sc.nextLine();
  CapitalString cp=new CapitalString();
  cp.cap(n);
  System.out.println("City: "+city);
 }
}
