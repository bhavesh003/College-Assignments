import java.util.*;
abstract class shape {
    abstract void area();
    abstract void volume();


        
}

class cylinder extends shape {
    double pi = 3.14;
    double radius =6.6;
    double height=5.56;
    
    void area() {
        double area=2*(pi*radius*height)+2*pi*radius*radius;
        System.out.println("Area of  cylinder is :" + area);
    }
    
    void volume() {
        double volume=pi*(radius*radius)*height;
        System.out.println("Volume of cylinder is :" + volume);
    }
    public static void main(String[] args) {
      
       
        cylinder c = new cylinder();
        c.area();
        c.volume();
    }

}