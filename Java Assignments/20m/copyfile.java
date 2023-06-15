import java.io.*;
import java.util.*;

public class copyfile {
  public static void copyContent(File a, File b) throws Exception {
    FileInputStream in = new FileInputStream(a);
    FileOutputStream out = new FileOutputStream(b);

    try {
      int n;
      while ((n = in.read()) != -1) {
        if (Character.isLowerCase(n)) {
          n = Character.toUpperCase(n);
        }
        out.write(n);
      }
    } finally {
      if (in != null) {
        in.close();
      }
      if (out != null) {
        out.close();
      }
    }
    System.out.println("File Copied");
  }

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    System.out.println("Enter Source filename:");
    String a = br.readLine();
    File x = new File(a);
    System.out.println("Enter destination filename:");
    String b = br.readLine();
    File y = new File(b);
    copyContent(x, y);

  }
}
