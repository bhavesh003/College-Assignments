import java.io.*;

public class MyDate {
    public int dd=10, mm=04, yy=2002;

    void Mydate(int dd,int mm, int yy)
    {
        this.dd=dd;
        this.mm=mm;
        this.yy=yy;
    }

    void display()
    {
        System.out.println(dd+"-"+mm+"-"+yy);
    }

    public static void main(String args[]) {
        MyDate md = new MyDate();
        md.display();
    }

}
