<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- score_list.jsp -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<jsp:useBean id="sm" class="final_3.ScoreManager" scope="application" />

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>score_list.jsp</title>
	<style>
		.score_list {
			width: 50%;
			border-collapse: collapse;
		}
		.score_list, .score_list td {
			text-align: center;
			border: 1px solid black;
		}
	</style>
</head>
<body>
<div align="center">
	<h2>성적보기(전체보기)</h2><hr>
	<a href="score_form.jsp">주소추가</a>
	<table class="score_list">
		<tr>
			<td>이름</td>
			<td>국어</td>
			<td>영어</td>
			<td>수학</td>
			<td>학점</td>
			<td>그룹</td>
		</tr>

	<c:forEach var="sb" varStatus="i" items="${sm.getScoreList()}">
	<tr>
			<td>${sb.getUsername()}</td>
			<td>${sb.getKor()}</td>
			<td>${sb.getEng()}</td>
			<td>${sb.getMath()}</td>
			<td>${sb.getGrade()}</td>
			<td>${sb.getGroup()}</td>
	</tr>
	</c:forEach>

	</table>
</div>
</body>
</html>
