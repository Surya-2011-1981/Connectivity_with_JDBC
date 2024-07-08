//package org.Surya.Project;
//
//import java.io.IOException;
//import java.io.PrintWriter;
//import java.sql.Connection;
//import java.sql.DriverManager;
//import java.sql.PreparedStatement;
//import java.sql.SQLException;
//
//import javax.servlet.ServletException;
//import javax.servlet.http.HttpServlet;
//import javax.servlet.http.HttpServletRequest;
//import javax.servlet.http.HttpServletResponse;
//
//public class FirstServlet extends HttpServlet{
//
//		protected void doPost (HttpServletRequest req,HttpServletResponse resp) throws ServletException, IOException
//		{
//			String sid=req.getParameter("i");
//			int id=Integer.parseInt(sid);
//			String name=req.getParameter("nm");
//			String dept=req.getParameter("dp");
//			String sperc=req.getParameter("pr");
//			double perc=Double.parseDouble(sperc);
//			
//			PrintWriter out=resp.getWriter();
//			out.println("<html><body bgcolor='cyan'>"+"<h1>Student Details Are : "+name+" from "+dept+" Department"+"</h1>"+"</body></html>");
//			out.close();
//			
//			Connection con=null;
//			PreparedStatement pstmt=null;
//			String qry="insert into College.Student values(?,?,?,?)";
//			try {
//				Class.forName("com.mysql.jdbc.Driver");
//				con = DriverManager.getConnection("jdbc:mysql://localhost:3306?user=root&password=admin");
//				pstmt=con.prepareStatement(qry);
//				pstmt.setInt(1,id);
//				pstmt.setString(2, name);
//				pstmt.setString(3, dept);
//				pstmt.setDouble(4, perc);
//				
//				pstmt.executeUpdate();
//			} catch (ClassNotFoundException | SQLException e) {
//				e.printStackTrace();			
//				}
//			
//			finally{
//				if(pstmt!=null)
//				{
//					try {
//						pstmt.close();
//					}catch(SQLException e)
//					{
//						e.printStackTrace();
//					}
//				}
//				if(con!=null)
//				{
//					try {
//						con.close();
//					}catch(SQLException e)
//					{
//						e.printStackTrace();
//					}
//				}
//			}
//		}
//}





package org.Surya.Project;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class FirstServlet extends HttpServlet {

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        req.setCharacterEncoding("UTF-8");
        resp.setContentType("text/html;charset=UTF-8");

        String sid = req.getParameter("i");
        int id = Integer.parseInt(sid);
        String name = req.getParameter("nm");
        String dept = req.getParameter("dp");
        String sperc = req.getParameter("pr");
        double perc = Double.parseDouble(sperc);

        try (PrintWriter out = resp.getWriter()) {
            out.println("<html><body bgcolor='cyan'>" +
                    "<h1>Student Details Are: " + name + " from " + dept + " Department</h1>" +
                    "</body></html>");
        }

        String url = "jdbc:mysql://localhost:3306/College?user=root&password=admin";
//        String qry = "INSERT INTO Student (id, name, department, percentage) VALUES (?, ?, ?, ?)";
        String qry = "INSERT INTO Student (id, name, department, percentage) VALUES (?, ?, ?, ?)";

        try (Connection con = DriverManager.getConnection(url);
             PreparedStatement pstmt = con.prepareStatement(qry)) {

            Class.forName("com.mysql.cj.jdbc.Driver");

            pstmt.setInt(1, id);
            pstmt.setString(2, name);
            pstmt.setString(3, dept);
            pstmt.setDouble(4, perc);

            pstmt.executeUpdate();
        } catch (ClassNotFoundException | SQLException e) {
            e.printStackTrace();
            resp.setStatus(HttpServletResponse.SC_INTERNAL_SERVER_ERROR);
            try (PrintWriter out = resp.getWriter()) {
                out.println("<html><body><h3>Error inserting data: " + e.getMessage() + "</h3></body></html>");
            }
        }
    }
}
