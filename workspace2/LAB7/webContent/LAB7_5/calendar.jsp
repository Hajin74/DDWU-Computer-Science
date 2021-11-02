<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.util.*" %>

<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>calendar</title>
	<style>
		caption {
			text-align: right;
		}
		table {
			width: 500px;
			border: 1px solid;
		}
		th, td {
			border: 1px solid black;
		}
		.c1 {
			color: blue;
		}
		.c2 {
			color: red;
		}
		.c3 {
			color: black;
		}
	</style>
</head>
<body>
<%!
	public String parseDay(int cnt) {
		if(cnt % 7 == 0)
			return "c1";
		else if(cnt % 7 == 1)
			return "c2";
		else
			return "c3";
	}	
%>

<%
	Calendar today = Calendar.getInstance();

	int year = today.get(Calendar.YEAR);
	int month = today.get(Calendar.MONTH) + 1;
	int day = today.get(Calendar.DATE);
	
	Calendar cal = Calendar.getInstance();
	
	int start = cal.getMinimum(Calendar.DATE);
	int end = cal.getActualMaximum(Calendar.DATE);
	
	cal.set(year, month - 1, 1);
	int startDay = cal.get(Calendar.DAY_OF_WEEK);
	
	int cnt = 0;
	
	out.print("<div align='center'><table>");
	out.print("<caption><h2>" + year + "-" + month + "-" + day + "</h2></caption");
	out.print("<tr><th style='color:red;'>일</th><th style='color:black;'>월</th><th style='color:black;'>화</th><th style='color:black;'>수</th><th style='color:black;'>목</th><th style='color:black;'>금</th><th style='color:blue;'>토</th></tr>");

	int i = 0;
	for(cnt = 1; cnt < end + startDay; cnt++) {
		if(cnt < startDay) {
			out.print("<td></td>");
			continue;
		}
		i++;
		
		if(cnt % 7 == 1) 
			out.print("<tr><td class=" + parseDay(cnt) + "><b>" + i + "</b></td>");
		else if (cnt % 7 == 0)
			out.print("<td class=" + parseDay(cnt) + "><b>" + i + "</b></td></tr>");
		else
			out.print("<td class=" + parseDay(cnt) + "><b>" + i + "</b></td>");
	}
	out.print("</table></div>");
%>
</body>
</html>