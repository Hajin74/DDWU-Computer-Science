<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- logout.jsp -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>logout.jsp</title>
</head>
<body>
<%
	session.invalidate();
	response.sendRedirect("login_main.jsp");
%>
</body>
</html>
