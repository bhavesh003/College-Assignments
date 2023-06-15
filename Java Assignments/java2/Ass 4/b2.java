import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
class b2 extends JFrame implements ItemListener
{
  JFrame frame = new JFrame();
  JRadioButton rb1 ,rb2,rb3;
  JTextField t1,t3,t4,t5;
  JCheckBox cb1,cb2; 
  b2()
  {
    frame.setLayout(new FlowLayout());
    ButtonGroup bg=new ButtonGroup();
    ButtonGroup bg2=new ButtonGroup();    

    JLabel l1 = new JLabel("Vaccination Details");
    JLabel l2 = new JLabel("Name:");
    JLabel l3 = new JLabel("Dose ");
    JLabel l4 = new JLabel("Vaccine ");
    t1 = new JTextField(40);
    t3 = new JTextField(20);
    t4 = new JTextField(20);
    t5 = new JTextField(5);
    cb1 = new JCheckBox("1st Dose",false);
    cb2 = new JCheckBox("2nd Dose",false);
    rb1 = new JRadioButton("Covishield",false);
    rb2 = new JRadioButton("Covaxin",false);
    rb3 = new JRadioButton("Sputnik V",false);

    JPanel p1 = new JPanel();
    JPanel p2 = new JPanel();
    p2.setLayout(new GridLayout(4,1,5,5));
    JPanel p3 = new JPanel();
    p3.setLayout(new GridLayout(4,1,5,5));
    JPanel p4 = new JPanel();
    JPanel p5 = new JPanel();
    JPanel p6 = new JPanel();
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
    p6.add(t4);
    p6.add(t3);
    p6.add(t5);
    rb1.addItemListener(this);
    rb2.addItemListener(this);
    rb3.addItemListener(this);
    frame.add(p1);
    frame.add(p5); 
    frame.add(p2);
    frame.add(p3);
    frame.add(p4);
    frame.add(p6);    
    frame.setSize(500,300);
    frame.setVisible(true);
    
}
public void itemStateChanged(ItemEvent e){
    String text=t1.getText();
    t4.setText("Name : "+text); 
    String vacc="Vaccine Selected :";
    if (rb1.isSelected())vacc=vacc+rb1.getText()+"";
    if (rb2.isSelected())vacc=vacc+rb2.getText()+"";
    if (rb3.isSelected())vacc=vacc+rb3.getText()+"";
    t3.setText(vacc);
    if (cb1.isSelected())t5.setText("Yes");
    else t5.setText("no");
   
    
    }
  
  public static void main(String args[])
  {
    b2 s = new b2();
  }
  
}

