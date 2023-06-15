import java.util.*;

public class sort_num {

    public static void sort(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        System.out.println("\nthe array in asscendind order :");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void sort2(int arr[], int n) {
        int temp = 0;
        // Sort the array in descending order
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] < arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        System.out.println("Elements of array sorted in descending order: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String args[]) {
        int n;
        int arr[] = new int[100];
        Scanner sc = new Scanner(System.in);
        System.out.println("no of arr u want: ");
        n = sc.nextInt();

        System.out.println("enter ele of arr: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        sort(arr, n);
        sort2(arr, n);
    }
}