import java.util.*;
import java.io.*;

public class b3customer {
    public static void main(String[] args) throws IOException {
        try {
            FileOutputStream path=new FileOutputStream("hello.txt");
            DataOutputStream os = new DataOutputStream(path);
            Scanner sc = new Scanner(System.in);
            System.out.println("***Writing operation***");
            System.out.print("Enter customer c_id : ");
            String cid = sc.next();
            System.out.print("Enter customer Mobile.No : ");
            String mob = sc.next();
            System.out.print("Enter customer Address : ");
            String adr = sc.next();
            os.writeUTF(cid);
            System.out.println();
            os.writeUTF(mob);
            System.out.println();
            os.writeUTF(adr);
            os.close();
            System.out.println("***Reading operation***");
            FileInputStream fis = new FileInputStream("hello.txt");
            DataInputStream is = new DataInputStream(fis);
            System.out.print("customer c_id : " + is.readUTF());
            System.out.println();
            System.out.print("customer Mobile.No : " + is.readUTF());
            System.out.println();
            System.out.print("customer Address : " + is.readUTF());
        } catch (Exception e) {
            System.out.println("something went wrong in write operation");
        }
    }
}