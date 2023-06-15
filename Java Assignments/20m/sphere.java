import java.util.Scanner;
import java.util.*;

abstract class shape {
    abstract void area(int r);

    abstract void volume(int r);
}

class sphere extends shape {
    double pi = 3.14;

    void area(int r) {
        double ar = 4 * pi * r * r;
        System.out.println("Area of Sphere is :" + ar);
    }

    void volume(int r) {
        double vol = (4 / 3) * (pi * r * r * r);
        System.out.println("Volume of Sphere is :" + vol);
    }

    public static void main(String[] args) {
        System.out.println("Enter radius: ");
        Scanner obj = new Scanner(System.in);
        int r = obj.nextInt();
        sphere s = new sphere();
        s.area(r);
        s.volume(r);
    }

}