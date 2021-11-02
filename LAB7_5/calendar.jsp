<%@ page import="java.util.Calendar" language="java" 
	contentType="text/html; charset=EUC-KR" pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Calendar</title>
<link rel="stylesheet" type="text/css" href="style.css"></link>
</head>
<body>
<%!
	public String parseDay(int cnt) {
		String c = "";
		
		if(cnt == 0) {
			c = "c1";
		} else if (cnt == 6) {
			c = "c2";
		} else {
			c = "c3";
		}
		
		return c;
	}
%>
<%
	Calendar today = Calendar.getInstance();

	int year = today.get(Calendar.YEAR);
	int month = today.get(Calendar.MONTH);
	int day = today.get(Calendar.DAY_OF_MONTH);
	
	out.println("<p>" + year + "-" + (month + 1) + "-" + day + "</p>");

	Calendar cal = Calendar.getInstance();
	cal.set(year, month, 1);
	int startDay = cal.get(Calendar.DAY_OF_WEEK);
	//out.println(startDay);

	out.println("<table>");
	
	// 요일 출력
	String[] week = {"일", "월", "화", "수", "목", "금", "토"};
	int cnt = 0;
	
	out.println("<tr>");	
	for(int i = 0; i < 7; i++) {
		out.println("<td class=" + parseDay(cnt) + ">");
		out.println(week[i]);
		cnt++;
		out.println("</td>");
	}
	out.println("</tr>");
	
	// 빈칸 출력
	out.println("<tr>");	
	for(int i = 1; i <= startDay - 1; i++) {
		out.println("<td>&nbsp" + "&nbsp</td>");
	}
	
	// 첫째주 출력
	cnt = startDay;
	day = 1;
	for(int i = cnt; i <= 7; i++) {
		out.println("<td class=" + parseDay(cnt - 1) + ">" + day + " </td>");
		cnt++;
		day++;
	}
	out.println("<br>");
	out.println("</tr>");
	
	// 나머지 출력
	int end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);
	cnt = 0;
	while(day <= end) {
		
		if(cnt == 0) {
			out.println("<tr>");
		}
		
		out.println("<td class=" + parseDay(cnt) + ">" + day + " </td>");
		day++;
		cnt++;
		
		if(cnt == 7) {
			out.println("</tr>");
			cnt = 0;
		}
	}
	
	out.println("</table>");
%>

</body>
</html>