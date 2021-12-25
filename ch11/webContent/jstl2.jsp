<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>Insert title here</title>
</head>
<body>
<%
	String name="홍길동";
	request.setAttribute("sname", name);
%>

	이름 : ${sname }<br>
	이름 : ${requestScope.sname }<br>
<%
	String lang="JSP";
%>
	<c:set var="lang" value="<%=lang %>" />
	<!-- 이 구문이 없으면 속성으로 설정하지 못했기 때문에 표현언어로 출력하지 못함 -->
	언어 : ${lang }
</body>
</html>
