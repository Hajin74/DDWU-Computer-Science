<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>Insert title here</title>
</head>
<body>
<h2>form에서 전달받아진 parameter는 어떻게 처리할 것인가</h2>
<form method="post" action="el_param.jsp">
	아이디 : <input type="text" name="id" /><br>
	<input type="checkbox" name="hobby" value="복싱">복싱
	<input type="checkbox" name="hobby" value="책">책
	<input type="checkbox" name="hobby" value="글쓰기">글쓰기
	<br><br>
	<input type="submit" value="가입하기">
	<input type="reset" value="다시작성">
</form>
</body>
</html>
