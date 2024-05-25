package org.Surya.Package5;
import java.sql.*;
import java.util.Scanner;

public class PlaceHolder_Input{
			
	public static void main(String[] rags)
	{
		Connection con=null;
		ResultSet rs=null;
		PreparedStatement pstmt=null;
		String qry="select * from users.data where id=?";
		Scanner obj=new Scanner(System.in);
		System.out.print("Enter id : ");
		int id=obj.nextInt();
		obj.close();
		try {
			Class.forName("com.mysql.jdbc.Driver");
			System.out.println("Driver Class Loaded");
			con=DriverManager.getConnection("jdbc:mysql://localhost:3306?user=root&password=admin");
			pstmt=con.prepareStatement(qry);
			pstmt.setInt(1, id);
			rs=pstmt.executeQuery();
			if(rs.next())
			{
				String name=rs.getString(1);
				double salary=rs.getDouble(3);
				System.out.println("Name : "+name);
				System.out.println("Salary : "+salary);
				System.out.println("Data Fetched");
			}
			else {
//				System.err.print("")
				System.err.println("No data Found for id : "+id);
			}
			
		} catch (ClassNotFoundException | SQLException e) {
			e.printStackTrace();
		}finally {
			if(pstmt!=null) {
				try {
						rs.close();
				} catch (SQLException e) {
					e.printStackTrace();
				
			}
			}
			if(rs!=null) {
				try {
						pstmt.close();
				} catch (SQLException e) {
					e.printStackTrace();
				
			}
			}
			if(con!=null) {
				try {
						con.close();
				} catch (SQLException e) {
					e.printStackTrace();
				
			}
			}
		}
		
	}
	
}
