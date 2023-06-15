import java.util.*;
import java.io.*;

class SortNumber {
  public static void main(String args[]) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    Set s = new TreeSet();
    System.out.print("Enter No of Integers: ");
    int n = Integer.parseInt(br.readLine());
    for (int i = 0; i < n; i++) {
      System.out.print("Enter Number: ");
      int x = Integer.parseInt(br.readLine());
      s.add(x);
    }
    Iterator itr = s.iterator();
    while (itr.hasNext()) {
      System.out.println(itr.next());
    }
    System.out.print("Enter Elements to be searched: ");
    int no = Integer.parseInt(br.readLine());
    if (s.contains(no))
      System.out.println("Number " + no + " found.");
    else
      System.out.println("Number " + no + "not found.");
  }
}
