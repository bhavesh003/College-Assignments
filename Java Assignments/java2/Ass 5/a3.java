import java.sql.*;
 
public class a3{
    public static void main(String[] args){
        Connection con = null;
        Statement stmt = null;
        try{
            Class.forName("org.postgresql.Driver");
            con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/jdbcproject","postgres","mayur123");
            stmt = con.createStatement();                  
            String sql = "SELECT * FROM country where region='west'";          
            ResultSet rs =  stmt.executeQuery(sql);
            while(rs.next()){
                String name=rs.getString("name");
                String continent=rs.getString("continent");
                String capital=rs.getString("capital");
                String region=rs.getString("region");
                System.out.println("Couuntry Name : "+name);
                System.out.println("Continent : "+continent);
                System.out.println("Capital : "+capital);
                System.out.println("Region : "+region);
                System.out.println();
			}
            rs.close();
            stmt.close();
            con.close();
        }
        catch (Exception e){
            System.out.println(e);
        }
    }
}