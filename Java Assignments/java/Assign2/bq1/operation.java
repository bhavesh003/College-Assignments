import java.io.*;
import java.util.*;
interface operation2
{
 public double pie=3.142;
 public void area();
 public void volume();
}
class circle implements operation2
{
 double radius=21.0;
 public void area()
 {
  double resultarea;
  resultarea= pie*radius*radius;
  System.out.println("Area of Circle: "+resultarea);
 }
 public void volume()
 {}
}
class cylinder implements operation2
{
 double radius=32.0;
 double height=43.0;
 public void area()
 {
  double resultArea;
  resultArea=2*pie*radius*height+2*pie*radius*radius;
  System.out.println("Area of Cylinder: "+resultArea);
 }
 public void volume()
 {
  double resultvol;
  resultvol=pie*radius*radius*height;
  System.out.println("Volume of Cylinder: "+resultvol);
 }
}
class operation
{
 public static void main(String args[])
 {
  circle c=new circle();
  c.area();
  c.volume();
  cylinder cl=new cylinder();
  cl.area();
  cl.volume();
 }
}
