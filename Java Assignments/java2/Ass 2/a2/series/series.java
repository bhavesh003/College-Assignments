package series;

public class series {
    public void fibonacci(int n) {
        int first = 0, second = 1, next;
        for (int i = 0; i <= n; i++) {
            if (i <= 1)
                next = i;
            else {
                next = first + second;
                first = second;
                second = next;
            }
            System.out.println(next);
        }
    }

    public void square(int n) {
        for (int i = 1; i <= n; i++) {
            System.out.println(i * i);
        }
    }

    public void cube(int n) {
        for (int i = 0; i <= n; i++) {
            System.out.println(i * i * i);
        }
    }
}
