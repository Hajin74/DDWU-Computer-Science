<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Include action</title>
</head>
<body>
	<h1>include 액션 연습</h1><hr>
	<jsp:include page="greeting.jsp">
		<jsp:param name="name" value="DWU" />
		<jsp:param name="date" value="2021/10/12" />
	</jsp:include>
	<h2>다시 include_action.jsp에서 출력입니다.</h2>
</body>
</html>