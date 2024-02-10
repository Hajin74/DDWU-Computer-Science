<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<% request.setCharacterEncoding("UTF-8");%>  
<%@ page import="java.io.*,java.util.*" %>
    
<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>result</title>
</head>
<body>
	<h2>전달된 파라미터 이름들</h2>
	<%
		Enumeration<String> paramNames = request.getParameterNames();
	
		while (paramNames.hasMoreElements()) {
			String name = paramNames.nextElement();
			out.print(name + "<br>");
		}
		out.print("<hr>");		
	%>
	
	타입: <%= request.getParameter("type") %><br>
	아이디: <%= request.getParameter("strID") %><br>
	비밀번호: <%= request.getParameter("strPwd") %><br>
	
</body>
</html>