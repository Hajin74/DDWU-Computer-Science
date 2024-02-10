<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<%
	pageContext.setAttribute("x", 30);
	pageContext.setAttribute("y", 7);
	pageContext.setAttribute("z", 15);
%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>el_operator</title>
</head>
<body>
<!-- 동일 페이지내에서 pageScope로 굳이 부를 필요 없어 -->
x = ${x} <br>

<!-- 연산자 -->
&#36;{x + y} : ${x + y}<br>
&#36;{y >= z} : ${y ge z}<br>
&#36;{10 * 10 == 100} : ${10 * 10 eq 100}<br>
&#36;{x > y && z < y} : ${x > y and y < z}<br>
&#36;{x==y ? "같다" : "다르다"} : ${x==y ? "같다" : "다르다"}<br>
</body>
</html>
