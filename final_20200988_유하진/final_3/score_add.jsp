<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- score_add.jsp -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<% request.setCharacterEncoding("UTF-8"); %>

<jsp:useBean id="sb" class="final_3.ScoreBean" />
<jsp:setProperty name="sb" property="*" />
<jsp:useBean id="sm" class="final_3.ScoreManager" scope="application" />

<% sm.add(sb); %>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>score_add.jsp</title>
</head>
<body>
<div align="center">
	<h2>등록내용</h2>
	이름 : <jsp:getProperty property="username" name="sb"/><br>
	국어: <jsp:getProperty property="kor" name="sb"/><br>
	영어: <jsp:getProperty property="eng" name="sb"/><br>
	수학: <jsp:getProperty property="math" name="sb"/><br>
	학점 : <jsp:getProperty property="grade" name="sb"/><br>
	그룹 : <jsp:getProperty property="group" name="sb"/><br>
	<hr>
	
	<a href="score_list.jsp">전체 목록보기</a>
	<a href="score_list_group.jsp">그룹별 목록보기</a>
</div>
</body>
</html>
