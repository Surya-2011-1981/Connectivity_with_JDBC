package org.Surya.Project3;
import java.sql.*;

public class Project3 {

	public static void main(String[] args) {
		Connection con=null;
		Statement stmt=null;
		String qry="insert into firstDB.users values(1,'Piyush','80000')";
		try {
			Class.forName("com.mysql.jdbc.Driver");
			System.out.println("Driver class loaded and registered");
			con=DriverManager.getConnection("jdbc:mysql://localhost:3306?user=root&password=admin");
			System.out.println("Connection Successfull");
			stmt=con.createStatement();
			System.out.print("Statement");
			stmt.executeUpdate(qry);
		}catch(ClassNotFoundException | SQLException e)
		{
			e.printStackTrace();
		}finally {
			if(stmt!=null)
			{
				try {
					stmt.close();
				}catch(SQLException e)
				{
					e.printStackTrace();
				}
			}
			if(con!=null)
			{
				try {
					con.close();
				}catch(SQLException e)
				{
					e.printStackTrace();
				}
			}
			System.out.println("Data Inserted");
			System.out.println("Costly Resources Closed");
		}
	}

}
