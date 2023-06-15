import java.sql.*;
import java.util.*;
class b3{
  public static void main(String[] args){
    Statement stmt =  null;
    ResultSet rs = null;
    Scanner sc =new Scanner(System.in);
    String name;
    PreparedStatement ps1=null, ps2=null;
    int area,population,choice;
    try{
        Class.forName("org.postgresql.Driver");
        Connection conn = DriverManager.getConnection("jdbc:postgresql://localhost:5432/jdbcproject","postgres","mayur123");
        stmt = conn.createStatement();
         
    if(conn!=null)
        System.out.println("Connection successful..");
    do{
    System.out.println("1: View Records");
    System.out.println("2: Insert Record");
    System.out.println("3: Delete Record");
    System.out.println("4: Modify Record");
    System.out.println("5: Search Record");
    System.out.println("6: Exit\n");
    System.out.print("Enter your choice : ");
    choice = sc.nextInt();
    System.out.println();
    switch(choice){
        case 1: 
        rs = stmt.executeQuery("Select * from district");
        while(rs.next()){
                System.out.println("Name = " + rs.getString(1));
                System.out.println("Area = " + rs.getInt(2));
                System.out.println("Population = " + rs.getInt(3));
                System.out.println();
            }
        break;
    case 2: 
        System.out.print("Enter Name of District : ");
        name = sc.next();
        System.out.print("Enter the Area : ");
        area = sc.nextInt();
        System.out.print("Enter the population : ");
        population = sc.nextInt();
        
        ps1 = conn.prepareStatement("Insert into district values(?,?,?)");
        ps1.setString(1,name);
        ps1.setInt(2,area); 
        ps1.setFloat(3, population);
        ps1.executeUpdate();
        System.out.println("record inserted successfully");
        break;  
    case 3: 
        System.out.print("Enter the Name of district to be deleted : ");
        name = sc.next();
        stmt.executeUpdate("Delete from district where name = " + name);
        System.out.println("record deleted successfully");
        break;
    case 4: 
        System.out.print("Enter the name of district to be modified : ");
        name =sc.next();
        System.out.print("Enter new Area : ");
        area = sc.nextInt();
        System.out.print("Enter new population : ");
        population = sc.nextInt();
        
        ps2 = conn.prepareStatement("Update district set area = ?,population=? where name = "+name);
        ps2.setInt(1,area);                
        ps2.setInt(2,population);
        ps2.executeUpdate();
        System.out.println("record modified successfully");
        break;
    case 5: 
        System.out.print("Enter the name of district to be searched : ");
        name = sc.next();
        rs = stmt.executeQuery("Select * from district where name = " + name);
        if(rs.next()){
            System.out.println("\nName = " + rs.getString(1));
            System.out.println("Area = " + rs.getInt(2));
            System.out.println("Population = " + rs.getInt(3));
            System.out.println();
        }
        else
            System.out.println("District not found");    
        break;  
     }
   }while(choice != 6);
       }catch(Exception e){
        System.out.println(e);
       }
    }                    
}  