<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>page_control_03.jsp</title>
</head>
<body>
<!-- page_control_04로 이동 -->
<% response.sendRedirect("page_control_04.jsp?src=page_control_03.jsp"); %>
</body>
</html>