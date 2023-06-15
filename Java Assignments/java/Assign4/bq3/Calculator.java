import java.awt.*;
import javax.swing.*;

class Calculator extends JFrame
{
 Calculator()
 {
  JFrame frame = new JFrame();
  JTextField t1 = new JTextField(15);
  JButton b0 = new JButton("0");
  JButton b1 = new JButton("1");
  JButton b2 = new JButton("2");
  JButton b3 = new JButton("3");
  JButton b4 = new JButton("4");
  JButton b5 = new JButton("5");
  JButton b6 = new JButton("6");
  JButton b7 = new JButton("7");
  JButton b8 = new JButton("8");
  JButton b9 = new JButton("9");
  JButton ba = new JButton("+");
  JButton bs = new JButton("-");
  JButton bm = new JButton("*");
  JButton bd = new JButton("/");
  JButton beq = new JButton("=");
  JButton dot = new JButton(".");
  JButton clr = new JButton("Clear");
 
  JPanel p = new JPanel();
  p.add(t1);
  p.add(b7);
  p.add(b8);
  p.add(b9);
  p.add(bd);
  p.add(b4);
  p.add(b5);
  p.add(b6);
  p.add(bm);
  p.add(b1);
  p.add(b2);
  p.add(b3);
  p.add(bs);
  p.add(dot);
  p.add(b0);
  p.add(beq); 
  p.add(ba);
  p.add(clr);
  frame.setTitle("Calculator");
  frame.setSize(200,240);
  frame.setVisible(true);
  frame.add(p);
  setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 }
 public static void main(String args[])
 {
  Calculator c = new Calculator();
 }
}
