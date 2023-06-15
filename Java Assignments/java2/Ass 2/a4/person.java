import utility.*;
import java.util.*;

public class person {
    public static void main(String args[]){
        capitalstring ct=new capitalstring();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter  name : ");
        String name=sc.next();
        System.out.println("Enter  city : ");
        String city=sc.next();
        ct.convert(name,city);
    }   
}
