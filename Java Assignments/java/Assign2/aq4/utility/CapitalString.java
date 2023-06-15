package utility;
import java.io.*;
import java.util.*;
public class CapitalString
{
 public void cap(String name)
 {
  name=name.substring(0,1).toUpperCase()+name.substring(1);
  System.out.println("Name: "+name);
 }
}
