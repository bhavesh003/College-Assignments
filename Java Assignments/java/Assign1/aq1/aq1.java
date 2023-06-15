import java.io.*;

public class aq1
{
  public static void main(String args[]) throws IOException {
    int n, sum = 0;
    BufferedReader obj = new BufferedReader(new InputStreamReader(System.in));
    System.out.print("Enter no: ");
    n = Integer.parseInt(obj.readLine());
    System.out.println("Multiplication Table of " + n);
    for (int i = 1; i <= 10; i++) {
      sum = n * i;
      System.out.println(n + "*" + i + "=" + sum);
    }
  }
}
