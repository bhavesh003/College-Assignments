import java.awt.event.*;
import javax.swing.*;

public class prog_lang_GUI extends JFrame {
  prog_lang_GUI() {
    JLabel label = new JLabel();
    label.setHorizontalAlignment(JLabel.CENTER);
    label.setSize(400, 100);

    JButton b = new JButton("Show");
    b.setBounds(200, 100, 75, 20);

    String languages[] = { "C", "C++", "Java", "Php", "Web-Dev" };
    JComboBox jc = new JComboBox(languages);
    jc.setBounds(50, 100, 90, 20);
    add(jc);
    add(label);
    add(b);

    setLayout(null);
    setSize(350, 350);
    setVisible(true);
    setTitle("cOMBOBOX EXAMPLE");
    b.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        String data = "Programing Language Selected :" + jc.getItemAt(jc.getSelectedIndex());
        label.setText(data);
      }
    });
  }

  public static void main(String args[]) {
    new prog_lang_GUI();
  }
}
