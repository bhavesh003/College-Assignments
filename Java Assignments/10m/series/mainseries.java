import series.*;
import java.util.*;

public class mainseries {
    public static void main(String args[]) {
        series s = new series();
        System.out.print("Enter a number :");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        s.nterm(num);
        // s.fibonacci(num);
        // s.square(num);
        // s.cube(num);
    }
}
