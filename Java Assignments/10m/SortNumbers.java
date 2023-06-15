public class SortNumbers {
    public static void main(String[] args) {
      // Parse the command line arguments as integers
      int num1 = Integer.parseInt(args[0]);
      int num2 = Integer.parseInt(args[1]);
      int num3 = Integer.parseInt(args[2]);
  
      // Sort the numbers
      int min = Math.min(num1, Math.min(num2, num3));
      int max = Math.max(num1, Math.max(num2, num3));
      int mid = num1 + num2 + num3 - min - max;
  
      // Display the sorted numbers
      System.out.println(min);
      System.out.println(mid);
      System.out.println(max);
    }
  }