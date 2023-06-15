import java.util.*;

public class a2 {
  public static void main(String args[]) {
    String name = null;
    float sal;
    Scanner sc = new Scanner(System.in);
    Hashtable ht = new Hashtable();
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
    System.out.print("\n\nEnter Name of the employee to be searched : ");
    String st = sc.next();
    k = ht.keys();
    v = ht.elements();
    int cnt = 0;
    while (k.hasMoreElements()) {
      name = (String) k.nextElement();
      if (st.equals(name)) {
        System.out.println("Salary = " + ht.get(name));
        cnt++;
      }
    }
    if (cnt == 0)
      System.out.println("Employee " + name + " not found .");
  }
}
