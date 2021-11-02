<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>ch03: HelloWorld</title>
<style>
	* {
		text-align: center;
	}

</style>
</head>
<body>
	<h1>Hello : 안녕하세요</h1>
	<hr>
	현재 날자와 시간은 : <%= new java.util.Date() %>
</body>
</html>