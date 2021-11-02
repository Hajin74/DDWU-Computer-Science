<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>greeting message</title>
<link rel="stylesheet" type="text/css" href="style.css"></link>
</head>
<body id="greeting">
	<h1>greeting.jsp에서 출력한 메시지 입니다.</h1>
	<p><%= request.getParameter("name") %>님 환영합니다.</p>
	<p>오늘은 <%= request.getParameter("date") %>입니다.</p>
</body>
</html>