import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
class b1 extends JFrame implements ActionListener{   
  JLabel userLabel=new JLabel("USERNAME");
  JLabel passwordLabel=new JLabel("PASSWORD");
  JTextField userTextField=new JTextField();
  JPasswordField passwordField=new JPasswordField();
  JButton loginButton=new JButton("LOGIN");
  JButton resetButton=new JButton("RESET");
  JCheckBox showPassword=new JCheckBox("Show Password");
    b1(){
    userLabel.setBounds(50,150,100,30);
    passwordLabel.setBounds(50,220,100,30);
    userTextField.setBounds(150,150,150,30);
    passwordField.setBounds(150,220,150,30);
    showPassword.setBounds(150,250,150,30);
    loginButton.setBounds(50,300,100,30);
    resetButton.setBounds(200,300,100,30);

    add(userLabel);  
    add(passwordLabel);
    add(userTextField);  
    add(passwordField);  
    add(showPassword);  
    add(loginButton);  
    add(resetButton);     
  }
  public void addActionEvent(){
    loginButton.addActionListener(this);
    resetButton.addActionListener(this);
    showPassword.addActionListener(this);
  }
  public void actionPerformed(ActionEvent e){ 
  if(e.getSource()==loginButton){
      String userText;
      String pwdText;
      userText=userTextField.getText();
      pwdText=passwordField.getText();
        if(userText.equalsIgnoreCase("Mayur")&&pwdText.equalsIgnoreCase("1234567")){
          JOptionPane.showMessageDialog(this,"Login Successful");
        }
        else{
            JOptionPane.showMessageDialog(this,"Invalid Username or Password");
          }
        }
      if(e.getSource()==resetButton){
        userTextField.setText(" ");
        passwordField.setText("");
        }
      if(e.getSource()==showPassword){
          if(showPassword.isSelected()){
              passwordField.setEchoChar((char)0);
            }
          else{
              passwordField.setEchoChar('*');
              }
        }
      }
    public static void main(String args[]){
        b1 l=new b1();
        l.setLayout(null);
        l.setTitle("Login Form");
        l.setVisible(true);
        l.setBounds(10,10,370,400);
        l.addActionEvent();
       }
    }