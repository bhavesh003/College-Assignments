import java.util.*;

class student

{
    int rno;
    String name;
    float per;

    student() {
        System.out.println("\nStudents Details\n");
    }

    student(int rno, String name, float per) {
        this.rno = rno;
        this.name = name;
        this.per = per;
    }

    void display() {
        System.out.println("\nStudent roll no:" + rno);
        System.out.println("Student name:" + name);
        System.out.println("Student percentage:" + per + "%");
        System.out.println();
    }

    public static void main(String a[]) {
        Scanner sc = new Scanner(System.in);
        int n = 5;
        int i;
        student s = new student();
        student s1[] = new student[n];

        for (i = 0; i < n; i++) {
            System.out.print("\nEnter Student roll no :");
            int rno = sc.nextInt();
            System.out.print("Enter Student name :");
            String name = sc.next();
            System.out.print("Enter Student percentage :");
            float per = sc.nextFloat();
            s1[i] = new student();
            s1[i] = new student(rno, name, per);
        }
        for (i = 0; i < n; i++) {
            s1[i].display();
        }
    }
}