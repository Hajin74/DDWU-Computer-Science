<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>LAB5_2</title>
</head>
<body>
	<%
		String s = "Hello, Welcome to JSP World! Let's go!";
		String t = "JSP";
		
		out.println("�ԷµǾ� �ִ� ���ڿ�: " + s + "<br>");
		out.println("���ڿ��� ����: " + s.length() +"<br>");
		out.println("\'JSP\'��� ���ڿ��� ��ġ: " + s.indexOf(t) + "<br>");
		out.println("��� �ҹ��ڷ� ����: " + s.toLowerCase() + "<br>");
		out.println("��� �빮�ڷ� ����: " + s.toUpperCase() + "<br>");
	%>
</body>
</html>