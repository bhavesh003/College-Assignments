import java.io.*;
class NumberException extends Exception{
  public String toString(){
     return("Number is 0");
   }
}
class a3Primenumber{
  int a;
  BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
  a3Primenumber()
  {
   try{
      System.out.print("Enter any interger to check prime : ");
      a=Integer.parseInt(br.readLine());
      if(a==0)
        throw new NumberException();
    }
   catch(NumberException ex){
      System.out.println(ex);
    }
   catch(IOException ex1){
      System.out.println("Enter proper number:");
    }
  }
  public void prime(){
    int cnt=0;
    for(int i=2;i<=a/2;i++)
      if(a%i==0){
         cnt++;
         break;
       }
   if(cnt==0)
      System.out.println(a+ " is a prime Number");
   else
      System.out.println(a+ " is not a prime Number");
 }
 public static void main(String args[]){
    a3Primenumber pn=new a3Primenumber();
    pn.prime();
 }
}
