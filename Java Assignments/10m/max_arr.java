import java.util.Scanner;

public class max_arr {
    public static int getLargest(int arr[], int n) {
        int temp;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr[n - 1];
    }

    public static void main(String args[]) {
        int arr[] = new int[100];
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("no of arr u want: ");
        n = sc.nextInt();

        System.out.println("enter ele of arr: ");
        for (int i = 0; i < n; i++)
        {
            arr[i]=sc.nextInt();
        }   
        
        getLargest(arr,n);
        System.out.println("Largest: " + getLargest(arr,n));
    }
}