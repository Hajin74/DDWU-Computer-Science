<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.util.*" %>
<% request.setCharacterEncoding("utf-8"); %>

<!DOCTYPE html>
<html>
<head>
	<meta charset="EUC-KR">
	<title>request_result</title>
</head>
<body>
<h2>전달된 파라미터 이름들</h2>
<%
	// 파라미터의 value가 아닌 name임
	Enumeration<String> en = request.getParameterNames();

	while(en.hasMoreElements()) {
		String name = en.nextElement();
		out.print(name + "<br>");
	}
	
	out.print("<hr>");
	
	String type = request.getParameter("type");
	String strID = request.getParameter("strID");
	String strPwd = request.getParameter("strPwd");
	
	out.print("타입: " + type + "<br>");
	out.print("아이디: " + strID + "<br>");
	out.print("비밀번호: " + strPwd + "<br>");
%>
</body>
</html>