package controller.dib;

import java.util.ArrayList;
import java.util.List;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import controller.Controller;
import model.dto.LectureDTO;
import model.service.LectureManager;

public class OthersDibController implements Controller {

	@Override
	public String execute(HttpServletRequest request, HttpServletResponse response) throws Exception {
		
		LectureManager lecman = LectureManager.getInstance();
		
		HttpSession session = request.getSession();
		String stuId = (String) session.getAttribute("userId");
		String lecId = request.getParameter("lecID");
		
		String[] othersDibIdList = lecman.findLecturesOtherStudentDib(stuId, lecId);
		
		int i = 0;
		List<LectureDTO> list = new ArrayList<LectureDTO>(); 
		while(i < 5) {
			list.add(lecman.findLecture(othersDibIdList[i]));
			i++;
			System.out.print(list + "     tttttkkkkk   listtest");
		}
		
		session.setAttribute("othersDibList", list);
		
		return "redirect:/user/mypage";
	}
		

}