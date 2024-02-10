<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- intro.jsp -->

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>Intro.jsp</title>
	<style>
		* {
			margin: 0;
			padding: 0;
		}
		#intro_table {
			width: 100%;
			padding: 30px;
		}
	</style>
</head>
<body>
<table id="intro_table" style="background-color: yellow">
	<tr>
		<td>
			<p>카페 소개</p>
			<img src="./images/coffee1.jpg" alt="coffee" style="width:200px"/>
		</td>
		<td>
			<%@ include file="info.jsp" %>
		</td>
	</tr>
	<tr>
		<td style="padding-top:20px">
			<p>영업 시간: 오전 9시 ~ 밤 10시</p>
			<p>휴무: <span style="color:red">매주 화요일</span><i>(화요일이 공휴일일 경우 화요일 영업, 다음날 휴무)</i></p>
			<%@ include file="calendar.jsp" %>
		</td>
	</tr>
</table>
</body>
</html>