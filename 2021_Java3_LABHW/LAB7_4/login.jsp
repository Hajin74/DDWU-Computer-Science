<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>login</title>
</head>
<body>
<%
	String id = request.getParameter("id");
	String pw = request.getParameter("password");
	
	String ad;
	if(id.equals("admin") && pw.equals("1234")) {
		ad = "main.jsp";
	} else {
		ad = "login_form.jsp";
	}
%>

<jsp:forward page="<%=ad %>"/>

</body>
</html>