<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>회원가입 시도</title>
</head>
<body>
	<h1>회원가입</h1>
	<form action="./userJoinAction.jsp" method="post">
		<input type="text" name="userID" />
		<input type="password" name="userPassword" />
		<input type="submit" value="회원가입" />
	</form>
</body>
</html>