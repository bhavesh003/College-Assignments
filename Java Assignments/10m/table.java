import java.io.*;

public class table{
    public static void main(String args[])throws IOException{
        int num;
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a number :");
        num=Integer.parseInt(br.readLine());
        System.out.println("******Multiplication table of "+num+"******");
        for(int i=1;i<=10;i++){
        System.out.println(num+"x"+i+"="+num*i);
        }
    }
}