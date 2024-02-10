<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8" import="ch07.*"%>
<% request.setCharacterEncoding("UTF-8"); %>

<jsp:useBean id="addr" class="ch07.AddrBean" />
<jsp:setProperty name="addr" property="*" /> <!-- setter를 쓰는 것 -->
<jsp:useBean id="am" class="ch07.AddrManager" scope="application" />

<% am.add(addr); %> <!-- 데이터를 추가해야함 -->

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>주소록 등록 처리</title>
</head>
<body>
<div align="center">
	<h2>등록내용</h2>
	이름 : <jsp:getProperty property="username" name="addr" /><p>
	전화번호 : <jsp:getProperty property="tel" name="addr" /><p>
	이메일 : <%= addr.getEmail() %><p>
	성별 : <jsp:getProperty property="sex" name="addr" /><p>
	<hr>
	
	<a href="addr_list.jsp">주소록 리스트 보기</a>
</div>
</body>
</html>