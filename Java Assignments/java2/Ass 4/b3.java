import java.awt.*;
import javax.swing.*;

public class b3 extends JFrame {
  JButton b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16;
  JTextField res;

  public b3() {
    super("calculator");
    JPanel p1 = new JPanel();
    JPanel p = new JPanel();
    p.setLayout(new GridLayout(5, 4, 14, 25));
    ButtonGroup bg = new ButtonGroup();

    res = new JTextField(25);

    b0 = new JButton("0");
    b1 = new JButton("1");
    b2 = new JButton("2");
    b3 = new JButton("3");
    b4 = new JButton("4");
    b5 = new JButton("5");
    b6 = new JButton("6");
    b7 = new JButton("7");
    b8 = new JButton("8");
    b9 = new JButton("9");
    b10 = new JButton("+");
    b11 = new JButton("-");
    b12 = new JButton("*");
    b13 = new JButton("/");
    b14 = new JButton("=");
    b15 = new JButton("CLEAR");
    b16 = new JButton(".");

    bg.add(b7);
    bg.add(b8);
    bg.add(b9);
    bg.add(b13);
    bg.add(b4);
    bg.add(b5);
    bg.add(b6);
    bg.add(b12);
    bg.add(b1);
    bg.add(b2);
    bg.add(b3);
    bg.add(b11);
    bg.add(b16);
    bg.add(b0);
    bg.add(b14);
    bg.add(b10);

    p1.add(res);
    p.add(b7);
    p.add(b8);
    p.add(b9);
    p.add(b13);
    p.add(b4);
    p.add(b5);
    p.add(b6);
    p.add(b12);
    p.add(b1);
    p.add(b2);
    p.add(b3);
    p.add(b11);
    p.add(b16);
    p.add(b0);
    p.add(b14);
    p.add(b10);
    add(p1);
    add(p);
    add(b15);
    setLayout(new FlowLayout());
    setSize(300, 350);
    setVisible(true);
  }

  public static void main(String args[]) {
    new b3();
  }
}
