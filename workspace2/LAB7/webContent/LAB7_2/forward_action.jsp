<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>forward</title>
<style>
	* {
		text-align: center;
	}
</style>
</head>
<body>
	<h1>forward 액션 연습</h1><hr>
	<jsp:forward page="greeting.jsp">
		<jsp:param name="name" value="DWU" />
		<jsp:param name="date" value="2021/11/01" />
	</jsp:forward>
	<p>다시 forwarde_action.jsp에서 출력입니다.</p>
</body>
</html>