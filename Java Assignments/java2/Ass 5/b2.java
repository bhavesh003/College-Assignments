import java.sql.*;
 
public class b2{
    public static void main(String[] args){
        Connection con = null;
        Statement stmt = null;
        try{
            Class.forName("org.postgresql.Driver");
            con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/jdbcproject","postgres","mayur123");
            stmt = con.createStatement(); 
            //creating update statement and executing                  
            String sql = "update cource set number_of_students=1000 where name='bca_science'"; 
            stmt.executeUpdate(sql); 
            //creating query statement        
            ResultSet rs =  stmt.executeQuery("select * from cource");
            while(rs.next()){
                int code=rs.getInt("code");
                String name=rs.getString("name");
                String department=rs.getString("department");
                int nos=rs.getInt("number_of_students");
                System.out.println("Couuntry code : "+code);
                System.out.println("name : "+name);
                System.out.println("department : "+department);
                System.out.println("number_of_students : "+nos);
                System.out.println();
			}
        }
        catch (Exception e){
            System.out.println(e);
        }
    }
}