<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- order.jsp -->

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>주문서 작성</title>
</head>
<body>
	<table id="order_table" style="margin:0 auto;">
	<tr>
		<td>
			<%@ include file="header.jsp" %>
		</td>
	</tr>
	<tr>
		<td style="background-color: yellow">
			<%@ include file="order_result.jsp" %>
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