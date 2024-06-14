package org.Surya.App;
import java.io.*;
import javax.servlet.*;
public class Load_on_Startup extends GenericServlet {
 public Load_on_Startup() {
	// TODO Auto-generated constructor stub
	 System.out.println("Servelet Object Created");	 
}
 public void init(ServletConfig config ) throws ServletException
 {
	 System.out.println("Servelet Object initialized");
 }

 	public void service (ServletRequest req, ServletResponse resp) throws ServletException, IOException
 	{
 		String name=req.getParameter("nm");
 		String place=req.getParameter("pl");
 		PrintWriter out=resp.getWriter();
 		out.println("<html> <body bgcolor='yellow'>"
 				+ "<h1> Welcome "+name+" From "+place+"</h1>"+"</body></html>");
 		out.close();
 		System.out.println("Server is Executed");
 	}
 	public void destroy() {
 		System.out.println("Costly Resources Closed");
 	}
 
}
