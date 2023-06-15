import java.awt.event.*;
import javax.swing.*;
import java.awt.*;
public class a3 extends JFrame implements ActionListener{
JFrame f;
JLabel l1,l2;
TextArea area;
JButton b;
 a3(){
 l1=new JLabel();
 l1.setBounds(50,25,100,30);
 l2=new JLabel();
 l2.setBounds(160,25,100,30);
 area=new TextArea();
 area.setBounds(20,75,250,200);
 
 b=new JButton("Count Words");
 b.setBounds(100,300,120,30);
 
 b.addActionListener(this);
 add(l1);
 add(l2);
 add(area);
 add(b);

 setSize(450,450);
 setTitle("Count Words and Characters");
 setLayout(null);
 setVisible(true); 
}
public void actionPerformed(ActionEvent e){
  String text=area.getText();
  String words[]=text.split("\\s");
  l1.setText("Words : "+words.length);
  l2.setText("Characters : "+text.length());
}
public static void main(String args[]){
    new a3();
  }
}
