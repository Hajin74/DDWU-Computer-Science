<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- forward_result.jsp -->
<% request.setCharacterEncoding("utf-8"); %>
<%@ page import="java.util.*" %>
<%!
	String[] mChoices = {"coffeeBeans"};
	
	ArrayList<String> getParameterNames(HttpServletRequest request) {
		int i = 0;
		
		ArrayList<String> arr = new ArrayList<String>();
		Enumeration<String> en = request.getParameterNames();
		while(en.hasMoreElements()) {
			String s = en.nextElement();
			arr.add(s);
		}
		return arr;
	}
	
	boolean isMultipleChoice(String paramName) {
		for(int i = 0; i < mChoices.length; i++) {
			if(paramName.equals(mChoices[i]))
				return true;
		}
		return false;
	}
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>LAB8_3</title>
</head>
<body>
<%
	ArrayList<String> list = getParameterNames(request);
	
	for(String str:list) {
		out.print(str + ": ");
		
		if(isMultipleChoice(str) == true) {
			String values[] = request.getParameterValues(str);
			for(String value: values) {
				out.print(value + "/");
			}
		} else {
			out.print(request.getParameter(str));
		}
		out.print("<br>");
	}
	
	out.print("<hr>");
	out.print("<h2>Preocessing Parameters</h2>");
	
	/*
	for(String str:list) {
		out.print(str + ": ");
		if(isMultipleChoice(str) == true) {
			String values[] = request.getParameterValues(str);
			
			for(String value:values) {
				if(str.equals("hobby"))
					out.print(hobbyNames[Integer.parseInt(value)] + "/");
				else
					out.print(value + "/");
			}
		} else {
			if(str.equals("gender"))
				out.print(gNames[Integer.parseInt(request.getParameter(str))]);
			else if (str.equals("phone1"))
				out.print(telArea[Integer.parseInt(request.getParameter(str))]);
			else
				out.print(request.getParameter(str));
			
			out.print("<br>");
		}
	}
	*/
%>
</body>
</html>