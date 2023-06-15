public class b1mynumber {
    private int a;

    public b1mynumber() {
        a = 0;
    }

    public b1mynumber(int a) {
        this.a = a;
    }

    public boolean isNegetive() {
        if (a < 0)
            return true;
        else
            return false;
    }

    public boolean isPositive() {
        if (a > 0)
            return true;
        else
            return false;
    }

    public boolean isOdd() {
        if (a % 2 != 0)
            return true;
        else
            return false;
    }

    public boolean isEven() {
        if (a % 2 == 0)
            return true;
        else
            return false;
    }

    public static void main(String args[]) {
        int num = Integer.parseInt(args[0]);
        b1mynumber b1 = new b1mynumber(num);
        if (b1.isNegetive())
            System.out.println("The number is negetive");
        if (b1.isPositive())
            System.out.println("The number is positive");
        if (b1.isOdd())
            System.out.println("The number is odd");
        if (b1.isEven())
            System.out.println("The number is even");
    }
}