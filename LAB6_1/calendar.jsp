<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
	<meta charset="EUC-KR">
	<title>calendar</title>
	<style>
	.calendar {
		width: 500px;
		border-collapse: collapse;
		font-family: 'Arial';
		font-weight: bold;
		margin: 0 auto;
	}
	.calendar td, th {
		border: 1px solid black;
	}
	.calendar th:first-child {
		color: red;
	}
	.calendar th:nth-child(4) {
		color: green;
	}
	.calendar th:nth-child(7) {
		color: blue;
	}
	</style>
</head>
<body>
<%
	String[] week = {"월", "화", "수", "목", "금", "토", "일"};

	out.println("<table class=\"calendar\">");
	for(int i = 0; i < 5; i++) {
		out.println("<tr>");
		for(int j = 0; j < 7; j++) {
			if(i == 0) {
				out.println("<th>" + week[j] + "</th>");
			} else {
				out.println("<td>&nbsp</td>");					
			}
		}
		out.println("</tr>");
	}
	out.println("</table>");
%>
</body>
</html>