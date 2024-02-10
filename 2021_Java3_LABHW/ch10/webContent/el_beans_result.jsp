<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<% request.setCharacterEncoding("UTF-8");%>

<jsp:useBean id="bean" class="ch10.ELBean" />
<jsp:setProperty name="bean" property="id" />

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

Java id : <jsp:getProperty name="bean" property="id" /><br>
EL Beans id : ${bean.id}<br>

</body>
</html>
