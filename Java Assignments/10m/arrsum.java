import java.io.*;
import java.util.*;

public class arrsum {
    public static void main(String args[]) {
        int arr[] = new int[100];

        Scanner sc = new Scanner(System.in);

        System.out.println("enter max no: ");
        int n = sc.nextInt();
        System.out.println("enter ele: ");
        int sum = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            sum = sum + arr[i];
        }

        System.out.println("sum: " + sum);

    }
}