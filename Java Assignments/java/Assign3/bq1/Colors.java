import java.util.*;
import java.io.*;

class Colors
{
  public static void main (String args[])
   {
     LinkedList ll=new LinkedList();
     ll.add("Red");
     ll.add("Blue");
     ll.add("Yellow");
     ll.add("Orange");
     Iterator i=ll.iterator();
     System.out.println("\nContents of the List using an Iterator:");
     
     while(i.hasNext())
     {
       String s=(String)i.next();
     }

     ListIterator li=ll.listIterator();
     while(li.hasNext())
     {
	System.out.println(li.next());
     }
     System.out.println("\nContents of the List in reverse order using a ListIterator:");
    
     while(li.hasPrevious())
     {
	System.out.println(li.previous());
     }	
     ll.add(2,"Pink");
     ll.add(3,"Green");
     System.out.println("\nList between blue and yellow is:");
     System.out.println(ll);
   } 
}

