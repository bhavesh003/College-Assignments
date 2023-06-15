import java.io.*;

public class prime {
    public static void main(String[] args) throws IOException {
        int num, i, count = 0;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a number:");
        num = Integer.parseInt(br.readLine());
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                count++;
                break;
            }
        }
        if (count == 0)
            System.out.println("\nIt is a prime number");
        else
            System.out.println("\nIt is not a prime number");

    }

}
