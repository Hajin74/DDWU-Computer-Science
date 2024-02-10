package controller.lecture;


import java.util.List;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import controller.Controller;
import model.dto.LectureDTO;
import model.dto.StudentDTO;
import model.service.LectureManager;
import model.service.UserManager;

public class LectureController implements Controller {
	@Override
    public String execute(HttpServletRequest request, HttpServletResponse response)	throws Exception {
		
    	LectureManager manager = LectureManager.getInstance();
    	List<LectureDTO> lecList = manager.findLectureList();
    	System.out.println(lecList);
    	
    	request.setAttribute("lecList", lecList);
    				
		return "/user/mypage.jsp";        
    }
}



