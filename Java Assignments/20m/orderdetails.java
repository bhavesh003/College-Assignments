import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

abstract class Order {
    String id, description;
}

class PurchaseOrder extends Order {
    String Customername;

    public void accept() throws IOException {
        System.out.println("Enter the Id, Description, Customer Name: ");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        id = br.readLine();
        description = br.readLine();
        Customername = br.readLine();
    }

    public void display() {
        System.out.println("\n----------------------");
        System.out.println("Id: " + id);
        System.out.println("Description: " + description);
        System.out.println("Customer Name: " + Customername);
        System.out.println("----------------------");
    }
}

public class orderdetails {
    public static void main(String[] args) throws IOException {
        int i, n = 3;
        PurchaseOrder[] l = new PurchaseOrder[n];
        for (i = 0; i < n; i++) {
            l[i] = new PurchaseOrder();
            l[i].accept();
        }
        for (i = 0; i < n; i++) {
            l[i].display();
        }
    }
}