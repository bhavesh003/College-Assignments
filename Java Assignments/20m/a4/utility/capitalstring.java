package utility;

public class capitalstring {
    public void convert(String str1,String str2){
        
        System.out.println("Updated Name is : "+
        str1.substring(0,1).toUpperCase()+
        str1.substring(1));
        
        System.out.println("Updated City is : "+
        str2.substring(0,1).toUpperCase()+
        str2.substring(1));
    }
}
