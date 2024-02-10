<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.util.*" %>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>4</title>
</head>
<body>
	<%= request.getParameter("src") %>에서 전달된 내용입니다<br>
	page4 출력중<hr>
	넘겨받는 파라미터들<br>
	
	<%
		Enumeration<String> en = request.getParameterNames();
		while(en.hasMoreElements()) {
			String s = en.nextElement();
			out.print(s + ": " + request.getParameter(s) + "<br>");
		}
	%>
	
	<%= request.getParameter("username") %> 반갑<hr>
</body>
</html>