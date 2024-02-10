<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.io.*,java.util.*" %>
<% request.setCharacterEncoding("UTF-8"); %>

<!DOCTYPE html>
<html>
<head>
	<meta charset="EUC-KR">
	<title>LAB8_3.jsp</title>
</head>
<body>
<%
	Enumeration<String> paramNames = request.getParameterNames();

	while(paramNames.hasMoreElements()) {
		String paramName = paramNames.nextElement();
		
		if(paramName.equals("hobby")) {
			String[] value = request.getParameterValues(paramName);
			
			out.print(paramName + ": ");
			for(int i = 0; i < value.length; i++) {
				out.print(value[i] + "/ ");
			}
		} else {
			String value = request.getParameter(paramName);
			
			out.print(paramName + ": " + value);
		}
		
		out.println("<br>");
	}
%>

<hr>
<h2>Processing Parameters</h2>

<%
	String[] mChoices = {"hobby"};
	String[] hobbyNames = {"뉴스", "맛집", "책", "영화", "여행"};
	String[] telArea = {"010", "080", "070", "02"};
	String[] gNames = {"남", "여"};

	paramNames = request.getParameterNames();

	while(paramNames.hasMoreElements()) {
		String paramName = paramNames.nextElement();
		
		if(paramName.equals("gender")) {
			String value = request.getParameter(paramName);
			int index = Integer.parseInt(value);
			
			value = gNames[index];
			
			out.print(paramName + ": " + value);
			
		} else if(paramName.equals("phone1")) {
			String value = request.getParameter(paramName);
			int index = Integer.parseInt(value);
			
			value = telArea[index];
			
			out.print(paramName + ": " + value);
			
		} else if(paramName.equals("hobby")) {
			String[] value = request.getParameterValues(paramName);
			int index;
			
			out.print(paramName + ": ");
			for(int i = 0; i < value.length; i++) {
				index = Integer.parseInt(value[i]);
				value[i] = hobbyNames[index];
				out.print(value[i] + "/ ");
			}
			
		} else {
			String value = request.getParameter(paramName);
			
			out.print(paramName + ": " + value);
			
		}
		
		out.println("<br>");
	}
%>
</body>
</html>