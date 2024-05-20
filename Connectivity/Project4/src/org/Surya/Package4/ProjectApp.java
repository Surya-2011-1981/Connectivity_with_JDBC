package org.Surya.Package4;

import java.sql.*;


public class ProjectApp {

	public static void main(String[] args) {
		Connection con=null;
		Statement st=null;
//		String query="insert into myapp.app values('Shyam',1,'30')";
//		String query1="insert into myapp.app values('Ram',2,'34')";
//		String query2="insert into myapp.app values('Mohan',3,'20')";
//		String query3="insert into myapp.app values('Bharat',4,'32')";
//		String query4="insert into myapp.app values('Shyam',5,'39')";
//		String query5="update myapp.app set Name='Surya' where id=1";
//		String query6="delete from myapp.app where id=3";
		
		
		
		try {
			//********  Load and Register Class *******
			Class.forName("com.mysql.jdbc.Driver");
			System.out.println("Driver Class Loaded and Registered");
			
			//******** Setting Up Connection With Database Server  *****
			con=DriverManager.getConnection("jdbc:mysql://localhost:3306?user=root&password=admin");
			System.out.println("Connection Setteled Up ");
			
			//******** Creating Statement or Platform (After this the SQL commands will Start working ) *****
			st=con.createStatement();
			System.out.println("Platform | Statement  Created ");
			
			
			//******** Executing SQL queries  *****
////		st.executeUpdate(query);
//			st.executeUpdate(query1);
//			st.executeUpdate(query2);
//			st.executeUpdate(query3);
//			st.executeUpdate(query4);
//			st.executeUpdate(query6);
			} catch (ClassNotFoundException | SQLException e) {
			e.printStackTrace();
		}
		finally
		{
			if(st!=null) {
				try 
				{
					st.close();
				} catch (SQLException e) {
					e.printStackTrace();
				}
			}
			if(con!=null)
			{
				try {
					con.close();
				} catch (SQLException e) {
					e.printStackTrace();
				}
			}
			System.out.println("Data Updated");
			System.out.println("Costly resources closed");
		}

	}

}
