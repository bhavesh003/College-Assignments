import java.sql.*;
 
public class b1{
    public static void main(String[] args){
        Connection con = null;
        Statement stmt = null;
        try{
            Class.forName("org.postgresql.Driver");
            con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/jdbcproject","postgres","mayur123");
            stmt = con.createStatement();                  
            String sql = "SELECT * FROM person where birth_year=1986";          
            String sql2 = "select * from person where gender='female' AND birth_year BETWEEN 2000 AND 2005";          
            ResultSet rs =  stmt.executeQuery(sql);
            while(  rs.next()){
                int id=rs.getInt("pid");
                String name=rs.getString("name");
                String gender=rs.getString("gender");
                int date=rs.getInt("birth_year");
                System.out.println("pid : "+id);
                System.out.println("Name : "+name);
                System.out.println("Gender : "+gender);
                System.out.println("Birth_year : "+date);
                System.out.println();
            }
        }
        catch (Exception e){
            System.out.println(e);
        }
        try{
            Class.forName("org.postgresql.Driver");
            con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/jdbcproject","postgres","mayur123");
            stmt = con.createStatement();                  
            String sql2 = "select * from person where gender='female' AND birth_year BETWEEN 2000 AND 2005";          
            ResultSet rs2 =  stmt.executeQuery(sql2);
            while(  rs2.next()){
                int id=rs2.getInt("pid");
                String name=rs2.getString("name");
                String gender=rs2.getString("gender");
                int date=rs2.getInt("birth_year");
                System.out.println("pid : "+id);
                System.out.println("Name : "+name);
                System.out.println("Gender : "+gender);
                System.out.println("Birth_year : "+date);
                System.out.println();
            }
        }
        catch (Exception e){
            System.out.println(e);
        }
    }
}