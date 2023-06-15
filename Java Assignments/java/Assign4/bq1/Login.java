import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.lang.Exception;

class Login extends JFrame implements ActionListener
{
  TextField username,password;
  Button b1,b2;
  Login()
  {
   Label n=new Label("Username:",Label.RIGHT);
   Label p=new Label("Password:",Label.RIGHT);
   username = new TextField(20);
   password = new TextField(20);
   b1=new Button("Login");
   b2=new Button("Reset");
   add(n);
   add(username);
   add(p);
   add(password);
   add(b1);
   add(b2);
   setLayout(new FlowLayout(0,60,20)); 

   setSize(400,200);
   setTitle("Login");
   setVisible(true);
    b1.addActionListener(this);
}
	
public void actionPerformed(ActionEvent ae)
{
 String userValue=username.getText();
 String passValue=password.getText();

 if(userValue.equals("bhavesh03@gmail.com")&&passValue.equals("boss1234"))
 {
  JOptionPane.showMessageDialog(null,"Login Successfull!");
 }
 else
 {
  JOptionPane.showMessageDialog(null,"Please enter valid username and password!");
 }	
}

public static void main(String args[])
{
 new Login();	
}
}
