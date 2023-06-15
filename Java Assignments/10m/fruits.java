import java.util.*;
import java.io.*;

class fruits {
  public static void main(String args[]) {
    LinkedList ll = new LinkedList();
    ll.add("Apple");
    ll.add("banana");
    ll.add("Guava");
    ll.add("Orange");
    Iterator i = ll.iterator();
    System.out.println("\nContents of the List using an Iterator:");

    while (i.hasNext()) {
      String s = (String) i.next();
    }

    ListIterator li = ll.listIterator();
    while (li.hasNext()) {
      System.out.println(li.next());
    }
  }
}