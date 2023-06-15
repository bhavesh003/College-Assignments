import java.util.*;
public class b3account {
    int acc_no;
    String acc_name;
    float acc_balance;
    Scanner sc=new Scanner(System.in);

    public void getdata(int n){
        for(int i=0;i<n;i++){
            System.out.println("Enter account number :");
            acc_no=sc.nextInt();
            System.out.println("Enter account name :");
            acc_name=sc.next();
            System.out.println("Enter account balance :");
            acc_balance=sc.nextFloat();
        }
    }

    public static void sortAccount(int n,int a3[]){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(acc_balance[i]>acc_balance[j])
            }
        }
    }
    public static void main(String args[]){
        System.out.println("How many Account Details to be entered :");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        b3account a3[]=new b3account[n];
        sortAccount(int n);
    }
}
