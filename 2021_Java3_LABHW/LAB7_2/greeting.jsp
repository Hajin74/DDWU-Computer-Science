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
	<h1>greeting.jsp���� ����� �޽��� �Դϴ�.</h1>
	<p><%= request.getParameter("name") %>�� ȯ���մϴ�.</p>
	<p>������ <%= request.getParameter("date") %>�Դϴ�.</p>
</body>
</html>