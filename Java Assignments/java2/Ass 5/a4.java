import java.sql.*;
import java.util.*;
class a4{
     public static void main(String args[]){
           Connection conn;
           Statement stmt;
	       Scanner sc=new Scanner(System.in);
           try{
                int ID,salary;
                String name;
                
                Class.forName("org.postgresql.Driver");
                conn=DriverManager.getConnection("jdbc:postgresql://localhost:5432/jdbcproject","postgres","mayur123");
                if(conn==null)
                     System.out.println("fail");
                else
                     System.out.println("Connected");
                     
                    PreparedStatement pstmt=conn.prepareStatement("insert into employee values(?,?,?)");
		            
                    System.out.println("Enter id:");
			        ID=sc.nextInt();
                    pstmt.setInt(1,ID);
			        
                    System.out.println("Enter name:");
			        name=sc.next();
			        pstmt.setString(2,name);
			        
                    System.out.println("Enter salary:");
			        salary=sc.nextInt();
			        pstmt.setInt(3,salary);
                    
			        pstmt.executeUpdate();
                    stmt = conn.createStatement();
                    ResultSet rs = stmt.executeQuery("Select * from employee");
                    while(rs.next()){
                        System.out.println("ID = "+rs.getInt(1));
                        System.out.println("Name = "+rs.getString(2));
                        System.out.println("Salary = "+rs.getInt(3));
                        }
                }
                catch(Exception e){
                        System.out.println(e);
                    }
        }
}
