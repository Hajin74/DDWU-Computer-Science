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
		
		out.println("������ " + year + "�� " + month + "�� " + date + "�� ");
		switch(day) {
			case 1:
				out.println("�Ͽ����Դϴ�.");
				break;
			case 2:
				out.println("�������Դϴ�.");
				break;
			case 3:
				out.println("ȭ�����Դϴ�.");
				break;
			case 4:
				out.println("�������Դϴ�.");
				break;
			case 5:
				out.println("������Դϴ�.");
				break;
			case 6:
				out.println("�ݿ����Դϴ�.");
				break;
			case 7:
				out.println("������Դϴ�.");
				break;
		}
		
		cal.set(2021, Calendar.FEBRUARY, 1);
		int start = cal.getMinimum(Calendar.DATE);
		int end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);
		out.println("<br><br>");
		out.println("�̹����� " + start + "�Ϻ��� �����Ͽ� " + end + "�Ͽ� �����ϴ�");
		
		cal.set(2020, Calendar.JANUARY, 23);
		int startDay = cal.get(Calendar.DAY_OF_WEEK);
		out.println("<br><br>");
		out.println("�ڷγ� ������ " + cal.get(Calendar.YEAR) + "�� " + (cal.get(Calendar.MONTH) + 1 )+ "�� " + cal.get(Calendar.DATE) + "���� ");
		switch(startDay) {
		case 1:
			out.println("�Ͽ����Դϴ�.");
			break;
		case 2:
			out.println("�������Դϴ�.");
			break;
		case 3:
			out.println("ȭ�����Դϴ�.");
			break;
		case 4:
			out.println("�������Դϴ�.");
			break;
		case 5:
			out.println("������Դϴ�.");
			break;
		case 6:
			out.println("�ݿ����Դϴ�.");
			break;
		case 7:
			out.println("������Դϴ�.");
			break;
	}
	
	%>
</body>
</html>