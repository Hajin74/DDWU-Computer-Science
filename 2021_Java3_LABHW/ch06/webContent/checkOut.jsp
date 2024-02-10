<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.util.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>선택 상품 목록 확인</title>
</head>
<body>
<div class="center">
	<h2>계산</h2><hr>
<%
	ArrayList list = (ArrayList)session.getAttribute("productlist");

	if(list == null)
		out.println("선택한 상품이 없네요");
	else {
		for(Object productname : list) {
			out.println(productname + "<br>");
		}
	}
	
%>
</div>
</body>
</html>