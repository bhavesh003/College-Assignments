import java.util.*;

interface b1operation{
    public void area();
    public void volume();
    static final double pi=3.14;

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter radius : ");
        float radius=sc.nextFloat();
        System.out.print("Enter height : ");
        float height=sc.nextFloat();
        
        circle c=new circle(radius);
        c.area();
        c.volume();
        
        cylinder cl=new cylinder(radius,height);
        cl.area();
        cl.volume();
    }
}

class circle implements b1operation{
    float radius;

    public circle(){}
    public circle(float radius){
        this.radius=radius;
    }

    public void area(){
        double area=pi*(radius*radius);
        System.out.println("\nArea of the circle is : "+area);
    }

    public void volume(){
        System.out.println("There is no volume of the circle");       
    }
}

class cylinder implements b1operation{
    float radius;
    float height;

    public cylinder(){}
    public cylinder(float radius,float height){
        this.radius=radius;
        this.height=height;
    }

    public void area(){
        double area=2*(pi*radius*height)+2*pi*radius*radius;
        //2*pi*r*h+2*pi*r*r
        System.out.println("\n\nArea of the cylinder is : "+area);
    }

    public void volume(){
        double volume=pi*(radius*radius)*height;
        System.out.println("Volume of the cylinder is :"+volume);       
    }
}