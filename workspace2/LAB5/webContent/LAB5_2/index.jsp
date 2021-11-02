<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>5_2</title>
</head>
<body>
<%
	String s = "Hello, welcome to jsp world! let's go!";
	String t = "jsp";
	
	out.print("입력되어 있는 문자열: " + s + "<br>");
	out.print("문자열의 길이: " + s.length() + "<br>");
	out.print("\'jsp\'라는 문자열의 위치 " + s.indexOf(t) + "<br>");
	out.print("모두 소문자로 변경: " + s.toLowerCase() + "<br>");
	out.print("모두 대문자로 변경: " + s.toUpperCase() + "<br>");
%>

</body>
</html>