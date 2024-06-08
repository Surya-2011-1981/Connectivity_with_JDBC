package org.Surya.App;
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
@WebServlet("/cf")

public class Server_1 extends GenericServlet
{
	public void service(ServletRequest req, ServletResponse resp)throws ServletException, IOException
	{
		String name=req.getParameter("name");
		String email=req.getParameter("email");
		String msg=req.getParameter("text");
		
		PrintWriter out=resp.getWriter();
		out.println("<html> <body bgcolor='yellow'>"+"<h1> Hello Mr. "+name+" <br> </h1> <b>"+email+" </b><br>"+"<i>Is this Your message </i><b style='color:orangered;font-size:30px;'>"+msg+"</b> Yours </body></html>");
		out.close();
	}
}