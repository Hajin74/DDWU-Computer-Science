<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- login.jsp -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<% request.setCharacterEncoding("UTF-8"); %>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>login.jsp</title>
</head>
<body>
<%
	if(request.getParameter("userId").equals("admin") && request.getParameter("userPw").equals("1234")) {
		session.setAttribute("userId", request.getParameter("userId"));
		session.setAttribute("username", "관리자");
		
		response.sendRedirect("login_main.jsp");
	} else {
%>
	<script>
		alert("아이디 또는 비밀번호가 틀립니다!");
		history.back();
	</script>
<%
	}
%>
</body>
</html>
