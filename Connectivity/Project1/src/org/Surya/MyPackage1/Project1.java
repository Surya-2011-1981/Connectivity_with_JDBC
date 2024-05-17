package org.Surya.MyPackage1;
import java.sql.*;
public class Project1 {

	public static void main(String[] args) {
	Connection con=null;
	try {
		Class.forName("com.mysql.jdbc.Driver");
		System.out.println("Load and Register");
		con = DriverManager.getConnection("jdbc:mysql://localhost:3306?user=root&password=admin");
		System.out.println("Connection Successful");

	}catch(ClassNotFoundException | SQLException e) {
		e.printStackTrace();
	}
	finally {
		if(con!=null)
		{
			try {
				con.close();
			}
			catch(SQLException e)
			{
				e.printStackTrace();
			}
		}
	}
	System.out.println("Cosly Resources Closed");

	}

}
