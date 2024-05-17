package org.Surya.Package2;

import java.sql.*;

public class Project2Class_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Connection con=null;
		try {
			Class.forName("com.mysql.jdbc.Driver");
			System.out.println("Driver class loaded and registered");
			con=DriverManager.getConnection("jdbc:mysql://localhost:3306?user=root&password=admin");
			System.out.println("Connection Successfull");
		}catch(ClassNotFoundException | SQLException e)
		{
			e.printStackTrace();
		}finally {
			if(con!=null)
			{
				try {
					con.close();
				}catch(SQLException e)
				{
					e.printStackTrace();
				}
			}
			System.out.print("Costly Resources Closed");
		}
	}

}
