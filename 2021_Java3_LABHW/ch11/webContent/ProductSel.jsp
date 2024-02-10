<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>상품 선택</title>
</head>
<body>
<div align="center">
	<h2>상품 선택</h2><hr>
	1. 선택한 상품은 : ${param.sel} <br> <!-- request.getParameter("sel") -->
	2. num1 + num2 = ${product.num1 + product.num2} <br>
</div>
</body>
</html>
