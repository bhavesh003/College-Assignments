import java.awt.*;
import javax.swing.*;
class Vaccination extends JFrame
{
 JFrame frame = new JFrame();
 Vaccination()
 {
  frame.setLayout(new FlowLayout());
  JLabel l1=new JLabel("Vaccine Details");
  JLabel l2=new JLabel("Name:");
  JLabel l3=new JLabel("Dose");
  JLabel l4=new JLabel("Vaccine");
  JTextField t1=new JTextField(30);
  JCheckBox cb1=new JCheckBox("1st Dose",false);
  JCheckBox cb2=new JCheckBox("2nd Dose",false);
  JRadioButton rb1=new JRadioButton("Covishiled",false);
  JRadioButton rb2=new JRadioButton("Covaxin",false);
  JRadioButton rb3=new JRadioButton("Sputnik V",false);
  JTextArea t2=new JTextArea("Name:_______________ 1st Dose:_____ 2nd Dose:_____ \nVaccine:__________");
  JPanel p1=new JPanel();
  
  JPanel p2=new JPanel();
  p2.setLayout(new GridLayout(4,1,5,5));
  
  JPanel p3=new JPanel();
  p3.setLayout(new GridLayout(4,1,5,5));
  
  JPanel p4=new JPanel();
  JPanel p5=new JPanel();
  
  ButtonGroup bg=new ButtonGroup();
  ButtonGroup bg2=new ButtonGroup();
  
  bg.add(rb1);
  bg.add(rb2);
  bg.add(rb3);
  
  bg2.add(cb1);
  bg2.add(cb2);
  
  p1.add(l1);
  p5.add(l2);
  p5.add(t1);
  p2.add(l3);
  p2.add(cb1);
  p2.add(cb2);
  p3.add(l4);
  p3.add(rb1);
  p3.add(rb2);
  p3.add(rb3);
  p4.add(t2);
  
  frame.add(p1);
  frame.add(p5);
  frame.add(p2);
  frame.add(p3);
  frame.add(p4);
  frame.setSize(400,300);
  frame.setVisible(true);
  setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
 }
 public static void main(String args[])
 {
  Vaccination v=new Vaccination();
 }
}

