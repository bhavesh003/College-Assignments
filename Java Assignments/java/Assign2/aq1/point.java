// import java.io.*;
// import java.util.*;

public class point {
    public int x;
    public int y;

    public point() {
        x = 30;
        y = 40;
    }

    public point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public static void main(String args[]) {
        colorpoint ob = new colorpoint();
        ob.display();
        point3D ob2 = new point3D();
        ob2.display();
    }
}

class colorpoint extends point {
    public String color = "red";

    public void display() {
        System.out.println("ColorPoint Details:");
        System.out.println("x co-ordinate: " + x);
        System.out.println("y co-ordinate: " + y);
        System.out.println("Color: " + color);
        System.out.println("\n______________________________\n");
    }
}

class point3D extends point {
    public int z = 50;

    public void display() {
        System.out.println("ColorPoint Details:");
        System.out.println("x co-ordinate: " + x);
        System.out.println("y co-ordinate: " + y);
        System.out.println("z co-ordinate: " + y);
    }
}
