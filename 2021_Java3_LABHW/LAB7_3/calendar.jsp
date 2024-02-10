<%@ page import="java.util.Calendar" language="java" 
	contentType="text/html; charset=EUC-KR" pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Calendar</title>
</head>
<body>
	<%
		Calendar cal = Calendar.getInstance();
		int year =  Integer.parseInt(request.getParameter("year"));
		int month = Integer.parseInt(request.getParameter("month"));
		
		out.println("<h1>" + year + "�� " + month + "��</h1><hr>");
		
		cal.set(year, month - 1, 1);
		int startDay = cal.get(Calendar.DAY_OF_WEEK);
		int start = cal.getMinimum(Calendar.DATE);
		int end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);
		int day = start;
		int i;
		int weekChange;
		
		// ��ĭ ���
		for(i = 1; i <= startDay - 1; i++) {
			out.println("&nbsp" + "&nbsp");
		}
		
		// ù°�� ���
		weekChange = startDay;
		for(i = weekChange; i <= 7; i++) {
			out.println(day + " ");
			day++;
		}
		out.println("<br>");
		
		// ������ ���
		weekChange = 0;
		while(day <= end) {
			out.println(day + " ");
			day++;
			weekChange++;
			
			if(weekChange == 7) {
				out.println("<br>");
				weekChange = 0;
			}
		}
	%>
</body>
</html>