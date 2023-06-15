import java.sql.*;
import java.util.*;

class a4employee {
     public static void main(String args[]) {
          Connection conn;
          Statement stmt;
          ResultSet rs;
          try (Scanner sc = new Scanner(System.in)) {
               try {
                    int ID, salary;
                    String name;

                    Class.forName("org.postgresql.Driver");
                    conn = DriverManager.getConnection("jdbc:postgresql://localhost:5432/postgres", "postgres", "danger@420");
                    if (conn == null)
                         System.out.println("fail");
                    else
                         System.out.println("Connected");
                    PreparedStatement pstmt = conn.prepareStatement("insert into employee values(?,?,?)");
                    System.out.println("Enter id:");
                    ID = sc.nextInt();
                    pstmt.setInt(1, ID);
                    System.out.println("Enter name:");
                    name = sc.next();

                    System.out.println("Enter salary:");

                    salary = sc.nextInt();

                    pstmt.setString(2, name);
                    pstmt.setInt(3, salary);
                    pstmt.executeUpdate();
                    stmt = conn.createStatement();
                    rs = stmt.executeQuery("Select * from employee");
                    while (rs.next()) {
                         System.out.println("\nID = " + rs.getInt(1));
                         System.out.println("Name = " + rs.getString(2));
                         System.out.println("Salary = " + rs.getInt(3));
                    }
               } catch (Exception e) {
                    System.out.println(e);
               }
          }
     }
}
