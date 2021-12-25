<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8" import="ch07.*"%>
<jsp:useBean id="am" class="ch07.AddrManager" scope="application" />

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>주소록 목록</title>
	<style>
		.addr_list {
			margin-top: 20px;
			border_collapse: collapse;
		}
		.addr_list, .addr_list td {
			border: 1px solid black;
		}
	</style>
</head>
<body>
<div align="center">
	<h2>주소록</h2><hr>
	<a href="addr_form.html">주소 추가 할게요</a>
	
	<table class="addr_list">
		<tr>
			<td>이름</td>
			<td>전화번호</td>
			<td>이메일</td>
			<td>성별</td>
		</tr>
<%
		for(AddrBean ab : am.getAddrList()) {
%>		
		<tr>
			<td><%=ab.getUsername() %></td>
			<td><%=ab.getTel() %></td>
			<td><%=ab.getEmail() %></td>
			<td><%=ab.getSex() %></td>
		</tr>
<%
		}
%>
	</table>
</div>
</body>
</html>