<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.util.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>트위터 게시하기</title>
</head>
<body>
<%
	request.setCharacterEncoding("utf-8");

	String msg = request.getParameter("msg");
	
	Object username = session.getAttribute("user");
	
	ArrayList<String> msgs = (ArrayList<String>)application.getAttribute("msgs");
	
	if(msgs == null) {
		msgs = new ArrayList<String>();
		application.setAttribute("msgs", msgs);
	}
	
	msgs.add(username + "::" + msg + ", " + new java.util.Date());
	
	application.log(msg + "추가됨");
	response.sendRedirect("twitter_list.jsp");
%>
</body>
</html>