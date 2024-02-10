<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.util.Calendar" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>6_4</title>
</head>
<body>
<%
	Calendar cal = Calendar.getInstance();

	int year = 2021;
	int month = 7; // 11월
	
	out.print("<h2>" + year + "년 " + (month + 1) + "월</h2><hr>");
	
	cal.set(year, month, 1);
	int day = cal.get(Calendar.DAY_OF_WEEK);
	int end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);
	
	out.print("<div>");
	
	for(int i = 1; i < day; i++) {
		out.print("<span>&nbsp;&nbsp;</span>");
	}
	
	for(int i = 1; i <= end; i++) {
		if(i <= 9)
			out.print("&nbsp;" + i);
		else
			out.print(i);
		
		if(day % 7 == 0)
			out.print("<br>");
		
		day++;
	}
	
	out.print("</div>");
%>
</body>
</html>