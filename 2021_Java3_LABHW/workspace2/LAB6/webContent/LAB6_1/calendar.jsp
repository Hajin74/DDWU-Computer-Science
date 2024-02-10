<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>5_3</title>
	<style>
		#calendar_table {
			width: 90%;
			border-collapse: collapse;
			text-align: center;
			font-weight: bold;
		}
		#calendar_table, th, td {
			border: 1px solid black;
		}
		#calendar_table td {
			width: 50px;
		}
	
		#calendar_table td:nth-child(1) {
			color: red;
		}
		#calendar_table td:nth-child(4) {
			color: green;
		}
		#calendar_table td:nth-child(7) {
			color: blue;
		}
	</style>
</head>
<body>
<%
	String week[] = {"월", "화", "수", "목", "금", "토", "일"};

	out.print("<table id=\"calendar_table\">");
	for(int i = 0; i < 5; i++) {
		out.print("<tr>");
		for(int j = 0; j < 7; j++) {
			if(i == 0) {
				out.print("<td>" + week[j] + "</td>");
			} else {
				out.print("<td>&nbsp;</td>");	
			}
		}
		out.print("</tr>");
	}
	out.print("</table>");
%>
</body>
</html>