<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>JSTL 연습</title>
</head>
<body>
<h3>set, out</h3>
<c:set var="lang1" value="<h2>JSP</body>h2>" />
<c:set var="lang2" value="python" />
<c:set var="intArray" value="${[10,20,3,4,5]}" />

language(jstl):
<c:out value="${lang1}" default="Not registered" escapeXml="true" />
<p>language(el) : ${lang2}</p>
<p>intArray[2] : ${intArray[2]}</p>
	
<h3>if문</h3>
<c:set var="study" value="true" />
<c:if test="${study}">
	<p>수강 언어 : ${lang2}</p>
</c:if>

<c:if test="${!study}">
	<p>수강안해요</p>
</c:if>

<h3>forEach</h3>
<ul>
	<c:forEach var="num" varStatus="i" items="${intArray }">
		<li>${i.index } : ${num }</li>
	</c:forEach>
</ul><hr>

<h3>else if(switch) 형태 표현 : choose</h3>
<c:choose>
	<c:when test="${study }">
		<p>수강 과목 : ${lang2 }</p>
	</c:when>
	<c:when test="${!study }">
		<p>수강하지 않음</p>
	</c:when>
	<c:otherwise>
		<p>수강하지 않음</p>
	</c:otherwise>
</c:choose>
</body>
</html>
