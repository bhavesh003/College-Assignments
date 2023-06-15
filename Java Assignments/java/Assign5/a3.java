import java.sql.*;

class a3 {
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
			rs = stmt.executeQuery("select * from country WHERE Region='west'");
			while (rs.next()) {
				System.out.println("\ncountry name=" + rs.getString(1));
				System.out.println("continent=" + rs.getString(2));
				System.out.println("Capital=" + rs.getString(3));
				System.out.println("Region=" + rs.getString(4));
				// System.out.println("birth_year=" + rs.getInt(4));
				conn.close();
			}
		}

		catch (Exception e) {
			System.out.println(e);
		}
	}
}