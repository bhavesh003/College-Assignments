public class a4mydate {
    int dd,mm,yy;
    public a4mydate(){
        dd=27;
        mm=02;
        yy=2002;
    }

    public a4mydate(int dd,int mm,int yy){
        this.dd=dd;
        this.mm=mm;
        this.yy=yy;
    }
    public void display(){
        System.out.println("The date is :: "+dd+"-"+mm+"-"+yy);
    }
    public static void main(String args[]){
        a4mydate m1 =new a4mydate();
        a4mydate m2 =new a4mydate(27,02,2002);
        m1.display();
        m2.display();
    }
}
