import java.sql.*;

class a1person {
	public static void main(String args[]) throws java.sql.SQLException {
		Connection conn;
		Statement stmt;
		ResultSet rs;
		try {
			Class.forName("org.postgresql.Driver");
			conn = DriverManager.getConnection("jdbc:postgresql://localhost:5432/postgres", "postgres", "danger@420");
			if (conn == null)
				System.out.println("fail");
			else
				System.out.println("connected");
			stmt = conn.createStatement();
			rs = stmt.executeQuery("select * from person");
			while (rs.next()) {
				System.out.println("\nPID=" + rs.getInt(1));
				System.out.println("name=" + rs.getString(2));
				System.out.println("gender=" + rs.getString(3));
				System.out.println("birth_year=" + rs.getInt(4));
				conn.close();
			}
		}

		catch (Exception e) {
			System.out.println(e);
		}
	}
}