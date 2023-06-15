import java.awt.*;

class a1 extends Frame {
  TextField username, pass;
  Label n, p;
  Button b1, b2;

  a1() {

    n = new Label("Username:", Label.RIGHT);
    p = new Label("Password:", Label.RIGHT);

    username = new TextField(20);
    pass = new TextField(20);

    b1 = new Button("Login");
    b1.setBounds(0, 0, 100, 5);
    b2 = new Button("Reset");
    b1.setBounds(200, 0, 100, 5);

    add(n);
    add(username);
    add(p);
    add(pass);
    add(b1);
    add(b2);
    setLayout(new FlowLayout(0, 60, 20));

    setSize(400, 163);
    setTitle("Login");
    setVisible(true);
  }

  public static void main(String args[]) {
    a1 l1 = new a1();
  }
}
