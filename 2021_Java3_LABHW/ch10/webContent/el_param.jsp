<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<% request.setCharacterEncoding("UTF-8"); %>
<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>form에서 전달받아진 parameter는 어떻게 처리할 것인가</title>
</head>
<body>
id : ${param['id']}<br>
hobby : ${paramValues.hobby[0]}<br>

<!--  id 속성이 없으면 true, 있으면 false -->
id의 요청 여부 : ${empty param.id}<br>
</body>
</html>
