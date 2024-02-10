<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>상품선택화면</title>
<%
	request.setCharacterEncoding("utf-8");

	session.setAttribute("name", request.getParameter("username"));
%>
</head>
<body>
<div class="center">
	<h2>상품 선택</h2><hr>
	<%= session.getAttribute("name") %>님이 로그인한 상태입니다.<hr>
	<form name="form1" method="post" action="add.jsp">
		<select name="product">
			<option>사과</option>
			<option>귤</option>
			<option>파인애플</option>
		</select>
		<input type="submit" value="추가" />
	</form>
	
	<a href="checkOut.jsp">계산</a>
</div>
</body>
</html>