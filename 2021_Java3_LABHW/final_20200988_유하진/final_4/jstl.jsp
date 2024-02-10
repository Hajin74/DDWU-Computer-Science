<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- jstl.jsp -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>jstl.jsp</title>
</head>
<body>
<h2>나 소개</h2><hr>
<form method="post" action="jstl_result.jsp">
	이름 : <input type="text" name="irum" /><br>
	생년원일 : <input type="date" name="birth" /><br>
	좋아하는 과일 : 
	<input type="checkbox" name="food" value="0">사과
	<input type="checkbox" name="food" value="1">딸기
	<input type="checkbox" name="food" value="2">귤
	<input type="checkbox" name="food" value="3">키위
	<input type="checkbox" name="food" value="4">수박
	<br>
	
	좋아하는 색 :
	<select name="color">
		<option>오렌지</option>
		<option>파란</option>
	</select><br>
	<input type="submit" value="보내기" />
</form>

</body>
</html>
