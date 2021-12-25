<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<%
	String week[] = {"월", "화", "수", "목", "금", "토", "일"};
	pageContext.setAttribute("weekday", week);
	// 자바코드를 쓰려면 속성으로 설정해주어야함
%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>Insert title here</title>
</head>
<body>
${weekday[0]}<br>
</body>
</html>
