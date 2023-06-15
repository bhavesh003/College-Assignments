import java.sql.Connection;
import java.sql.DriverManager;

public class connectjdbc {
    public static void main(String args[]) {
        Connection conn = null;
        try {
            Class.forName("org.postgresql.Driver");
            conn = DriverManager.getConnection("jdbc:postgresql://localhost:5432/postgres", "postgres", "Danger@420");
            if (conn != null) {
                System.out.println("connection success");
            } else {
                System.out.println("connection failed");
            }
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}