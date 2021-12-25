<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<% request.setCharacterEncoding("UTF-8"); %>
<jsp:useBean id="lb" class="LAB13.LoginBean" scope="session" />
<jsp:setProperty name="lb" property="*" />

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>등록내용</title>
	<style>
		.LAB13_3 {
			background-color: tomato;
			border-collapse: collapse;
		}
		.LAB13_3, .LAB13_3 td {
			border: 1px solid black;
		}
		.LAB13_3 td {
			padding: 10px;
		}
	</style>
</head>
<body>
<div align="center">
	<h2>등록내용</h2><hr>
	<table class="LAB13_3">
		<tr>
			<td>이름</td>
			<td><c:out value="${lb.id}" default="Not registered" escapeXml="true" /></td>
		</tr>
		<tr>
			<td>패스워드</td>
			<td><c:out value="${lb.pw}" default="Not registered" escapeXml="true" /></td>
		</tr>
		<tr>
			<td>이메일</td>
			<td><c:out value="${lb.email}" default="Not registered" escapeXml="true" /></td>
		</tr>
		<tr>
			<td>성별</td>
			<td><c:out value="${lb.gender}" default="Not registered" escapeXml="true" /></td>
		</tr>
		<tr>
			<td>생일</td>
			<td><c:out value="${lb.birth}" default="Not registered" escapeXml="true" /></td>
		</tr>
		<tr>
			<td colspan="2">
				${lb.id}씨는 
				
				<c:if test="${lb.gender.equals('1')}">
					여자이고
				</c:if>
				<c:if test="${!lb.gender.equals('1')}">
					남자이고 
				</c:if>
				
				<c:if test="${lb.isGrownUp()}">
					성인입니다. 
				</c:if>
				<c:if test="${!lb.isGrownUp()}">
					성인이 아닙니다. 
				</c:if>
			</td>
		</tr>
	</table>
</div>

</body>
</html>
