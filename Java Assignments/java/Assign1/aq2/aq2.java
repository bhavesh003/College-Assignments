// import java.io.*;

public class aq2 {

    public static void rev(int num) {
        int rev = 0, rem = 0, n = num;
        while (num > 0) {
            rem = num % 10;
            rev = rem + (rev * 10);
            num = num / 10;
        }
        System.out.println("Reverse of " + n + " is :" + rev);
    }

    public static void main(String args[]) {
        int num = Integer.parseInt(args[0]);
        rev(num);
    }
}
