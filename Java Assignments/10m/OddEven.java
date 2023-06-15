import java.io.*;

public class OddEven {
    private int n;

    void OddEven(int n) {
        this.n = n;
    }

    static void isEven(int n)
    {
        if(n%2==0)
            System.out.println("Even");
        else
            System.out.println("Odd");
    }

    public static void main(String args[])
    {
        int num = Integer.parseInt(args[0]);
        isEven(num);
    }
}
