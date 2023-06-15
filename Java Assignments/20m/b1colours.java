import java.util.*;
import java.io.*;

class b1colours {
  public static void main(String args[]) {
    LinkedList ll = new LinkedList();
    ll.add("Red");
    ll.add("Blue");
    ll.add("Yellow");
    ll.add("Orange");
    Iterator i = ll.iterator();
    System.out.println("\n1: Displaying Contents of the List using an Iterator:");

    // while (i.hasNext()) {
    //   String s = (String) i.next();
    //   // System.out.print(" ");
    // }

    ListIterator li = ll.listIterator();
    while (li.hasNext()) {
      System.out.print(li.next() + "  ");
    }
    System.out.println("\n\n2: Contents of the List in reverse order using a ListIterator:");

    while (li.hasPrevious()) {
      System.out.print(li.previous() + "  ");
    }

    System.out.println("\n\n3: List between blue and yellow is:");
    LinkedList l2 = new LinkedList();
    l2.add("Pink");
    l2.add("Green");

    ll.add(2, l2);

    System.out.println(ll);
    System.out.println();
  }
}
