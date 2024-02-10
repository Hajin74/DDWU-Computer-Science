<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.util.Calendar" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>6_3</title>
</head>
<body>
<%
	Calendar cal = Calendar.getInstance();

	int year = cal.get(Calendar.YEAR);
	int month = cal.get(Calendar.MONTH);
	int date = cal.get(Calendar.DATE);
	int day = cal.get(Calendar.DAY_OF_WEEK);
	String days[] = {"", "일", "월", "화", "수", "목", "금", "토"};
	
	out.print("오늘은 " + year + "년 " + (month + 1)+ "월 " + date + "일 " + days[day] + "요일<br>");
	
	//cal.set(2021, Calendar.FEBRUARY, 1);
	int start = cal.getMinimum(Calendar.DATE);
	int end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);
	
	out.print("이번달은 " + start + "일부터 시작하여 " + end + "일에 끝남<br>");

	cal.set(2020, Calendar.JANUARY, 23);
	int coronaDay = cal.get(Calendar.DAY_OF_WEEK);
	
	out.print("코로나가 시작한 날은 " + days[coronaDay] + "임<br>");
%>
</body>
</html>