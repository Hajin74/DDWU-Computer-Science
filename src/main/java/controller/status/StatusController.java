package controller.status;

import java.io.PrintWriter;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import controller.Controller;
import model.service.StatusManager;

public class StatusController implements Controller {
	@Override
	public String execute(HttpServletRequest request, HttpServletResponse response) throws Exception {

		try {
			HttpSession session = request.getSession();
			String stuId = (String) session.getAttribute("userId");
			String lecId = request.getParameter("statusId");
			
			StatusManager manager = StatusManager.getInstance();
			
			int statusCnt = manager.existingStatus(stuId, lecId);
			
			System.out.println("lecId: "+ lecId +" cnt: "+statusCnt + "stuId" + stuId);
			
			if(stuId == null) {
				response.setContentType("text/html; charset=UTF-8");
			    PrintWriter out = response.getWriter();
			    out.println("<script>alert('로그인 후 수강여부를 표시할 수 있습니다.'); history.go(-1);</script>");
			    out.flush();
			    response.flushBuffer();
			    out.close();
			} else {
				if(statusCnt == 0) {
					manager.create(statusCnt, stuId, lecId);
					response.setContentType("text/html; charset=UTF-8");
				    PrintWriter out = response.getWriter();
				    out.println("<script>alert('로그인 후 수강여부를 표시할 수 있습니다.'); history.go(-1);</script>");
				    out.flush();
				    response.flushBuffer();
				    out.close();
				}
				else 
					manager.delete(statusCnt, stuId, lecId);
			}
			
		} catch (Exception e) {

			request.setAttribute("deleteStatusFailed", true);
			request.setAttribute("exception", e);
		}
		return "redirect:/lecture/searchResult";
	}

}