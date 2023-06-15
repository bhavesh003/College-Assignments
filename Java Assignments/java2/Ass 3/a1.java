import java.util.*;
class a1{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        Set s=new TreeSet();
        System.out.print("Enter no of elements to be entered : ");
        int n=sc.nextInt();
        System.out.print("Enter numbers : ");
        //entering and adding numbers to tree set
        for(int i=0;i<n;i++){
            int x=sc.nextInt();
            s.add(x);
        }
        //printing numbers from tree set
        System.out.println();
        Iterator itr=s.iterator();
        while(itr.hasNext()){
            System.out.print(itr.next()+" ");
        }
        //searching numbers in tree set
        System.out.print("\nEnter number to be searched : ");
        int no=sc.nextInt();
        if(s.contains(no))
        System.out.println("Number "+no+" found");
        else
        System.out.println("Number "+no+" not found");
    }
}