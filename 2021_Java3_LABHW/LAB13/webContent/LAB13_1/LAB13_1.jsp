<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8" import="java.util.*" %>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<% request.setCharacterEncoding("UTF-8"); %>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>LAB13_1</title>
</head>
<body>
	id : ${param.id}<br>
	pw : ${param.pw}<br>
	gender : ${param.gender}<br>
	phone1 : ${param.phone1}<br>
	phone2 : ${param.phone2}<br>
	phone3 : ${param.phone3}<br>
	email : ${param.email}<br>
	birth : ${param.birth}<br>
	
	hobby :
	<c:forEach var="hobby" varStatus="i" items="${paramValues.hobby}">
		${hobby} / 
	</c:forEach>
	<br>
	
	memo : ${param.memo}<br><hr>
	
	<h2>Processing Parameters</h2>
	
	id : ${param.id}<br>
	pw : ${param.pw}<br>
	
	gender : 
	<c:choose>
		<c:when test="${param.gender.equals('0')}">
			남
		</c:when>
		<c:when test="${param.gender.equals('1')}">
			여
		</c:when>
	</c:choose><br>
	
	phone1 : ${param.phone1}<br>
	phone2 : ${param.phone2}<br>
	phone3 : ${param.phone3}<br>
	email : ${param.email}<br>
	birth : ${param.birth}<br>
	
	<c:set var="hobbyNames" value='${["뉴스", "맛집", "책", "영화", "여행"]}' />
	
	hobby :
	<c:forEach var="hobby" varStatus="i" items="${paramValues.hobby}">
		${hobbyNames[hobby]}/ 
	</c:forEach>
	<br>
	
	memo : ${param.memo}<br>
</body>
</html>
