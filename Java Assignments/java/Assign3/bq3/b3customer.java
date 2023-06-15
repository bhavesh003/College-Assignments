import java.util.*;
import java.io.*;
// * This program illustrates how to use the DataOutputStream class for writing
// * And how to use the DatainputStream class for reading
public class b3customer {
    public static void main(String[] args)throws IOException{
        FileOutputStream path=new FileOutputStream("hello.txt");
        DataOutputStream os=new DataOutputStream(path);
        Scanner sc =new Scanner(System.in);
        System.out.println("***Writing operation***");
        System.out.print("Enter customer c_id : "); 
        // int cid=sc.nextInt();
        String cid=sc.next();
        System.out.print("Enter customer Mobile.No : "); 
        // long mob=sc.nextLong();
        String mob=sc.next();
        System.out.print("Enter customer Address : "); 
        String adr=sc.next();
        os.writeUTF(cid);
        os.flush();
        System.out.println();
        os.writeUTF(mob);
        System.out.println();
        os.writeUTF(adr);
        os.close();
        System.out.println("***Reading operation***");
        FileInputStream fis=new FileInputStream("hello.txt");
        DataInputStream is=new DataInputStream(fis);
        System.out.print("customer c_id : "+is.readInt()); 
        System.out.println();
        System.out.print("customer Mobile.No : "+is.readLong()); 
        System.out.println();
        System.out.print("customer Address : "+is.readUTF()); 
    }
}