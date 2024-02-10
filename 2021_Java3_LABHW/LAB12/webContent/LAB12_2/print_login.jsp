<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<% request.setCharacterEncoding("UTF-8"); %>
<%@ taglib tagdir="/WEB-INF/tags" prefix="mytag" %>

<% session.setAttribute("id", request.getParameter("id")); %>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>커스텀 태그와 함께 출력</title>
</head>
<body>
	<mytag:greeting color="green" />
</body>
</html>
