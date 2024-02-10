<%@ page import="java.util.Calendar" language="java" 
	contentType="text/html; charset=EUC-KR" pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
	<meta charset="EUC-KR">
	<title>LAB6_3</title>
</head>
<body>
	<%
		Calendar cal = Calendar.getInstance();
	
		int year = cal.get(Calendar.YEAR);
		int month = cal.get(Calendar.MONTH);
		int date = cal.get(Calendar.DATE);
		int day = cal.get(Calendar.DAY_OF_WEEK);
		
		out.println("오늘은 " + year + "년 " + month + "월 " + date + "일 ");
		switch(day) {
			case 1:
				out.println("일요일입니다.");
				break;
			case 2:
				out.println("월요일입니다.");
				break;
			case 3:
				out.println("화요일입니다.");
				break;
			case 4:
				out.println("수요일입니다.");
				break;
			case 5:
				out.println("목요일입니다.");
				break;
			case 6:
				out.println("금요일입니다.");
				break;
			case 7:
				out.println("토요일입니다.");
				break;
		}
		
		cal.set(2021, Calendar.FEBRUARY, 1);
		int start = cal.getMinimum(Calendar.DATE);
		int end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);
		out.println("<br><br>");
		out.println("이번달은 " + start + "일부터 시작하여 " + end + "일에 끝납니다");
		
		cal.set(2020, Calendar.JANUARY, 23);
		int startDay = cal.get(Calendar.DAY_OF_WEEK);
		out.println("<br><br>");
		out.println("코로나 시작은 " + cal.get(Calendar.YEAR) + "년 " + (cal.get(Calendar.MONTH) + 1 )+ "월 " + cal.get(Calendar.DATE) + "일은 ");
		switch(startDay) {
		case 1:
			out.println("일요일입니다.");
			break;
		case 2:
			out.println("월요일입니다.");
			break;
		case 3:
			out.println("화요일입니다.");
			break;
		case 4:
			out.println("수요일입니다.");
			break;
		case 5:
			out.println("목요일입니다.");
			break;
		case 6:
			out.println("금요일입니다.");
			break;
		case 7:
			out.println("토요일입니다.");
			break;
	}
	
	%>
</body>
</html>