<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- index.jsp -->

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>NAMOO Café</title>
	<style>
		#index_table {
			width: 960px;
			margin: 0 auto;
		}
	</style>
</head>
<body onLoad="alert('어서오세요 NAMOO카페에 오신 것을 환영합니다.')">
<table id="index_table">
	<tr>
		<td>
			<%@ include file="header.jsp" %>
		</td>
	</tr>
	<tr>
		<td>
			<%@ include file="intro.jsp" %>
		</td>
	</tr>
	<tr style="background-color:black; color:white">
		<td style="display:flex; justify-content:space-between;">
			<div>
				<img src="./images/logo.jpg" alt="logo" />
				<span>NAMOO</span>
			</div>
			<div style="text-align: right">
				<span>Copyright@ 2021 WebProgramming</span><br>
				<span>oooo@dongduk.ac.kr</span>
			</div>
		</td>
	</tr>
</table>
</body>
</html>