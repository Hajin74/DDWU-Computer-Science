<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>LAB7_4: forward</title>
<link rel="stylesheet" type="text/css" href="style.css" ></link>
</head>
<body>
	<form action="login.jsp" method="get">
		<input type="text" name="id" placeholder="아이디" /><br>
		<input type="password" name="password" placeholder="비밀번호" /><br>
		<input type="submit" name="submit" value="로그인" />
		<input type="reset" name="reset" value="다시입력" />
	</form>
</body>
</html>