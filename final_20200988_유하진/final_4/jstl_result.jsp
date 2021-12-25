<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- jstl_result.jsp -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<% 
	request.setCharacterEncoding("utf-8"); 
	String irum = request.getParameter("irum");
	String color = request.getParameter("color");
	String birth = request.getParameter("birth");
%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@ taglib tagdir="/WEB-INF/tags" prefix="mytag" %>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>jstl_result.jsp</title>
</head>
<body>
	<h2>나의 소개</h2>
	<mytag:printMe irum="<%=irum%>" color="<%=color%>" /><br><br>
	
	<c:set var="foods" value='${["사과", "딸기", "귤", "키위", "수박"]}' />
	
	<c:forEach var="food" varStatus="i" items="${paramValues.food}">
		${i.count}.${foods[food]}<br>
	</c:forEach>
	을 좋아합니다.<br><br>
	
	<%= irum %>님은 <%= birth %>년에 태어났으며, 
	
	<c:forTokens items="<%= birth %>" delims="-" var="b">
		<c:if test="${b<=2002}" var="result">
			성인입니다.
		</c:if>
		<br>
	</c:forTokens>
	<br>
</body>
</html>
