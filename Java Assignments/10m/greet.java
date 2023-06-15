import java.util.Scanner;

public class greet{
	private static Scanner sc;
	public static void main(String[] args) {
		String user_name;
		
		sc= new Scanner(System.in);

		System.out.print("\nPlease Enter Name: ");
		user_name = sc.nextLine();
	
		String lowStr2 = user_name.toUpperCase();	
		System.out.println("\n" + lowStr2+  ",nice to meet you!");
	}
}