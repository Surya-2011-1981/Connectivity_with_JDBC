//package org.Surya.App;
//
//public class FirstServlet {
//
//	public static void main(String[] args) {
//		
//
//	}
//
//}


package org.Surya.App;
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
@WebServlet("/fs")

public class FirstServlet extends GenericServlet
{
	public void service(ServletRequest req, ServletResponse resp)throws ServletException, IOException
	{
		String name=req.getParameter("nm");
		String place=req.getParameter("pl");
		
		PrintWriter out=resp.getWriter();
		out.println("<html> <body bgcolor='yellow'>"+"<h1> Welcome "+name+" from "+place+" </h1> "+"</body></html>");
		out.close();
	}
}



