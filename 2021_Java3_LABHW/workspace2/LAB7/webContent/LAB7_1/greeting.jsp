<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>greeting</title>
</head>
<body>
	<div id="greeting_page">
		<h2>greeting.jsp에서 출력한 메시지</h2>
		<p><%=request.getParameter("name") %>환영</p>
		<p>오늘은 <%=request.getParameter("date") %> 입니다.</p>
	
	</div>
</body>
</html>