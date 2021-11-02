<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>news</title>
<style>
</style>
</head>
<body>
<div id="news_page">
	<h2>오늘의 일정</h2><hr>
	<ul>
		<%
			String task1 = request.getParameter("task1");
			if(task1 == null)
				task1 = "일정 없음";
			out.print("<li>" + task1 + "</li>");
			
			String task2 = request.getParameter("task2");
			if(task2 == null)
				task2 = "일정 없음";
			out.print("<li>" + task2 + "</li>");
			
			String task3 = request.getParameter("task3");
			if(task3 == null)
				task3 = "일정 없음";
			out.print("<li>" + task3 + "</li>");
		%>
	</ul>
</div>
</body>
</html>