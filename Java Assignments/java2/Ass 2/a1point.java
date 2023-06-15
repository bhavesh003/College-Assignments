public class a1point {
    int x, y;

    public a1point() {
        x = 10;
        y = 20;
    }

    public a1point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public static void main(String args[]) {
        colorPoint cp = new colorPoint();
        point3D pd = new point3D();
        cp.display();
        pd.display();
    }
}

class colorPoint extends a1point {
    String colour = "blue";

    public void display() {
        System.out.println("colourpoint Details :");
        System.out.println("x coordinate :" + x);
        System.out.println("y coordinate :" + y);
        System.out.println("colour is :" + colour);
        System.out.println("\n________________________________________\n");
    }

}

class point3D extends a1point {
    int z = 30;

    public void display() {
        System.out.println("point3D Details :");
        System.out.println("x coordinate :" + x);
        System.out.println("y coordinate :" + y);
        System.out.println("z coordinate :" + z);
    }
}
