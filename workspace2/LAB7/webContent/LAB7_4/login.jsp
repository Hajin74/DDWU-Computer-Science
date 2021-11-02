<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<% request.setCharacterEncoding("utf-8"); %>
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>login</title>
</head>
<body>
<%
	String msg = "다시 입력 ㄱㄱ";
	String id = request.getParameter("id");
	String pw = request.getParameter("pw");
	
	if(id.equals("admin") && pw.equals("1234")) {
%>
	<jsp:forward page="main.jsp"/>
<% 
	} else {
%>
	<jsp:forward page="login_form.jsp">
		<jsp:param name="msg" value="<%=msg %>"/>
	</jsp:forward>		
<%
	}
%>		
	
	
</body>
</html>