import javax.swing.*;
import java.awt.event.*;
import java.awt.*;
public class c1 extends JFrame implements ActionListener {
    
    JMenuBar b1=new JMenuBar();
    JMenu menu1=new JMenu("File");
    JMenuItem j1=new JMenuItem("Open");
    JMenuItem j2=new JMenuItem("Save");
    JMenuItem j3=new JMenuItem("Save As");
    JMenuItem j4=new JMenuItem("Quit");
    JMenu menu2=new JMenu("Edit");
    JMenuItem j5=new JMenuItem("Cut");
    JMenuItem j6=new JMenuItem("Copy");
    JMenuItem j7=new JMenuItem("Paste");
    JMenuItem j8=new JMenuItem("Select All");
    JMenu menu3=new JMenu("Help");
    JMenuItem j9=new JMenuItem("Qna");
    JMenuItem j10=new JMenuItem("Get Help");
    JMenuItem j11=new JMenuItem("Troubleshoot");
    JMenuItem j12=new JMenuItem("Quick Fix");
    c1(){
        super("Jmenu Example");
        menu1.add(j1);
        menu1.add(j2);
        menu1.add(j3);
        menu1.add(j4);
        menu2.add(j5);
        menu2.add(j6);
        menu2.add(j7);
        menu2.add(j8);
        menu3.add(j9);
        menu3.add(j10);
        menu3.add(j11);
        menu3.add(j12);
        b1.add(menu1);
        b1.add(menu2);
        b1.add(menu3);
        setJMenuBar(b1);
        setSize(300,300);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e){
        String command=e.getActionCommand();
        if(command.equals("Quit")){
            System.exit(0);
        }else if(command.equals("Open")){
            System.out.println("Open command clicked");
        }
        else if(command.equals("Save")){
            System.out.println("Save command clicked");
        }
    }
    public void addActionEvent(){
        j4.addActionListener(this);
       j1.addActionListener(this);
        j2.addActionListener(this);
      }
      public static void main(String args[]) {
        c1 c=new c1();
        c.addActionEvent();
    }
}
