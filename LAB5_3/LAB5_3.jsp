<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>LAB5_3</title>
<style>
	table {
		width: 500px;
		border: 1px solid;
		font-family: 'Arial';
		font-weight: bold;
	}
	td, th {
		border: 1px solid black;
	}
	th:first-child {
		color: red;
	}
	th:nth-child(4) {
		color: green;
	}
	th:nth-child(7) {
		color: blue;
	}
</style>
</head>
<body>
	<%
		String[] week = {"월", "화", "수", "목", "금", "토", "일"};
	
		out.println("<table>");
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