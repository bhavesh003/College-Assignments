import java.sql.*;
 
public class a2{
    public static void main(String[] args){
        Connection con = null;
        Statement stmt = null;
        try{
            Class.forName("org.postgresql.Driver");
            con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/jdbcproject","postgres","mayur123");
            stmt = con.createStatement();                   //Creating The Statement Object
            String sql = "SELECT * FROM person";          //Constructing The SQL Query
            ResultSetMetaData rsmd =  stmt.executeQuery(sql).getMetaData();      //getting ResultSetMetaData object
            int colCount = rsmd.getColumnCount();           //getting number of columns in 'rs'
            System.out.println("Number Of Columns : "+colCount);
            System.out.println("column Details :");
            for(int i=1;i<=colCount; i++){
            	String colName = rsmd.getColumnName(i);      //getting column name of index 'i'
            	String colType = rsmd.getColumnTypeName(i);  //getting column's data type of index 'i'
            	System.out.println(colName+" is of type "+colType);
			}
            stmt.close();
            con.close();
        }
        catch (Exception e){
            System.out.println(e);
        }
    }
}