<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<%
	pageContext.setAttribute("msg", "배부르다"); // pageContext 내장객체
%>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	pageScope로 받은 값 -> 메세지 : <b>${pageScope.msg}</b><br>
</body>
</html>
