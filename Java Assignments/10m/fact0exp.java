
import java.util.*;

class NumberException extends Exception {
   public String toString() {
      return ("Number is 0");
   }
}

class fact0exp {
   int a;
   Scanner sc = new Scanner(System.in);

   fact0exp() {
      try {
         System.out.print("Enter any interger to check factorial : ");
         a = sc.nextInt();
         if (a == 0)
            throw new NumberException();
         factorial();
      } catch (NumberException ex) {
         System.out.println(ex);
      }
   }

   public void factorial() {
      int f = 1;
      for (int i = 1; i <= a; i++) {
         f = f * i;
      }
      System.out.println("factorial of " + a + " is " + f);
   }

   public static void main(String args[]) {
      fact0exp pn = new fact0exp();
   }
}
