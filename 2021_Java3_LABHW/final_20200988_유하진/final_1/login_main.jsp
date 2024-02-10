<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- login_main.jsp -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>login_main.jsp</title>
</head>
<body>
<%
	if(session.getAttribute("userId") == null || session.getAttribute("username") == null) {
%>
	<form method="post" action="login.jsp">
		아이디 : <input type="text" name="userId" />
		비밀번호 : <input type="password" name="userPw" />
		<input type="submit" value="로그인" />	
	</form>
<%
	} else {
		out.println(session.getAttribute("username") + "님 로그인하셨습니다.<br>");
		out.println("세션ID : " + session.getId() + "<br>");
		out.println("세션지속시간 : " + session.getMaxInactiveInterval() + "초<br>");
%>
	<form method="post" action="logout.jsp">
		<input type="submit" value="로그아웃" />
	</form>
<%
	}
%>
</body>
</html>
