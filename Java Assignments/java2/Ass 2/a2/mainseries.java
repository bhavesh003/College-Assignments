import series.*;
import java.util.*;

public class mainseries {
    public static void main(String args[]){
        series s=new series();
        System.out.print("Enter a number :");
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        System.out.println("Fibonacci series");
        s.fibonacci(num);
        System.out.println("Square Series");
        s.square(num);
        System.out.println("Cube Series");
        s.cube(num);
    }
}
