<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8" import="LAB13.*"%>
<% request.setCharacterEncoding("UTF-8"); %>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<jsp:useBean id="addr" class="LAB13.AddrBean" />
<jsp:setProperty name="addr" property="*" />
<jsp:useBean id="am" class="LAB13.AddrManager" scope="application" />

<% am.add(addr); %>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>addr_add.jsp</title>
</head>
<body>
<div align="center">
	<h2>등록내용</h2>
	
	이름 : <jsp:getProperty property="userName" name="addr"/><br>
	전화번호 : <c:out value="${addr.userTel}" default="Not registered" escapeXml="true" /><br>
	이메일 : <c:out value="${addr.userEmail}" default="Not registered" escapeXml="true" /><br>
	성별 : <c:out value="${addr.userSex}" default="Not registered" escapeXml="true" /><br>
	그룹 : <jsp:getProperty property="userGroup" name="addr"/><hr>
	
	<a href="addr_list.jsp">전체 목록보기</a>
	<a href="addr_list_group.jsp">그룹별 목록보기</a>
</div>
</body>
</html>