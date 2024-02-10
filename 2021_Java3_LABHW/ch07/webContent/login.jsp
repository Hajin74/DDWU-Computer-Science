<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<jsp:useBean id="login" class="ch07.LoginBean" scope="page" />
<jsp:setProperty name="login" property="*" />
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>로그인을 처리함</title>
</head>
<body>
<div align="center">
	<h2>로그인 예제</h2><hr>
<%
	if(!login.checkUser()) {
		out.println("실패");
	} else {
		out.println("성공");
	}
%>
	<hr>
	사용자 아이디 : <jsp:getProperty name="login" property="userid" /><br>
	사용자 패스워드 : <jsp:getProperty name="login" property="userpw" /><br>
</div>
</body>
</html>