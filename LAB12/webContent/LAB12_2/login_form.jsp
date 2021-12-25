<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>로그인 화면</title>
</head>
<body>
<form method="post" action="print_login.jsp">
	아이디 : <input type="text" name="id" /><br>
	비밀번호 : <input type="password" name="pw" /><br>
	<input type="submit" value="로그인" />
	<input type="reset" value="취소" />
</form>
</body>
</html>
