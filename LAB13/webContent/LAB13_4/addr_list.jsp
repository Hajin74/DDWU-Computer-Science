<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8" import="LAB13.*"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<jsp:useBean id="am" class="LAB13.AddrManager" scope="application" />

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>주소록 목록(전체)</title>
	<style>
		.addr_list {
			margin-top: 10px;
			border-collapse: collapse;
		}
		.addr_list td {
			padding: 5px;
			border: 1px solid black;
		}
	</style>
</head>
<body>
<div align="center">
	<h2>주소록(전체보기)</h2><hr>
	<a href="addr_form.jsp">주소추가</a>
	<table class="addr_list">
		<tr>
			<td>이름</td>
			<td>전화번호</td>
			<td>이메일</td>
			<td>성별</td>
			<td>그룹</td>
		</tr>

	<c:forEach var="ab" varStatus="i" items="${am.getAddrList()}">
	<tr>
			<td>${ab.getUserName()}</td>
			<td>${ab.getUserTel()}</td>
			<td>${ab.getUserEmail()}</td>
			<td>${ab.getUserSex()}</td>
			<td>${ab.getUserGroup()}</td>
	</tr>
	</c:forEach>

	</table>
</div>
</body>
</html>