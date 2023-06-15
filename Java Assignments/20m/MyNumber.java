import java.io.*;

public class MyNumber {
  public int a;

  public MyNumber() {
    a = 0;
  }

  public MyNumber(int a) {
    this.a = a;
  }

  public boolean isNegative() {
    if (a < 0)
      return true;
    else
      return false;
  }

  public boolean isPositive() {
    if (a > 0)
      return true;
    else
      return false;
  }

  public boolean isOdd() {
    if (a % 2 != 0)
      return true;
    else
      return false;
  }

  public boolean isEven() {
    if (a % 2 == 0)
      return true;
    else
      return false;
  }

  public static void main(String args[]) throws IOException {
    int a = Integer.parseInt(args[0]);

    MyNumber m = new MyNumber(a);

    if (m.isNegative())
      System.out.println("Number is Negative");

    if (m.isPositive())
      System.out.println("Number is Positive");

    if (m.isOdd())
      System.out.println("Number is Odd");

    if (m.isEven())
      System.out.println("Number is Even");
  }
}
