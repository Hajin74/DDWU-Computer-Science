<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<% request.setCharacterEncoding("utf-8"); %>
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>login_form</title>
</head>
<body>
<%
	String msg = request.getParameter("msg");
	if(msg != null)	
		out.print("<p>" + msg + "</p>");
%>
<form action="login.jsp" method="GET">
	<input type="text" name="id" size="20" placeholder="아이디"><br>
	<input type="password" name="pw" size="20"  placeholder="비밀번호"><br>
	<input type="submit" value="로그인" name="login" size="10">
	<input type="reset" value="다시입력" name="reset" size="10">
</form>
</body>
</html>