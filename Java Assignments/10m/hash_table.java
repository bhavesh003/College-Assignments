import java.util.*;

public class hash_table {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    Hashtable ht = new Hashtable();
    String name = null;
    float sal;
    System.out.print("Enter no of Employess : ");
    int n = sc.nextInt();
    for (int i = 0; i < n; i++) {
      System.out.print("Enter employee name - salary : ");
      name = sc.next();
      sal = sc.nextFloat();
      ht.put(name, sal);
    }
    System.out.println("Hash Table =" + ht);
    Enumeration k = ht.keys();
    Enumeration v = ht.elements();
    System.out.println("Name\tSalary");
    while (k.hasMoreElements()) {
      System.out.println(k.nextElement() + "\t" + v.nextElement());
    }
    // System.out.print("\n\nEnter Name of the employee to be searched : ");
    // String st = sc.next();
    // k = ht.keys();
    // v = ht.elements();
    // int cnt = 0;
    // while (k.hasMoreElements()) {
    //   name = (String) k.nextElement();
    //   if (st.equals(name)) {
    //     System.out.println("Salary = " + v.nextElement());
    //     cnt++;
    //   }
    // }
    // if (cnt == 0)
    //   System.out.println("Employee not found .");
  }
}
