<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.util.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>트위터 메인 화면</title>
<%
	request.setCharacterEncoding("utf-8");

	String username = request.getParameter("username");
	
	if(username != null) {
		session.setAttribute("user", username);
	}
%>
</head>
<body>
<div align="center">
	<h3>내 트위터</h3><hr>
	<form action="tweet.jsp" method="post">
		@<%=session.getAttribute("user") %>
		<input type="text" name="msg">
		<input type="submit" value="트윗보내기">
	</form><hr>
	
	<div align="left">
		<ul>
<%	// tweet.jsp에서 맨처음 ArrayList<String> msgs를 만들어서 여기서는 트위터 목록을 가져오기 위해 사용
			ArrayList<String> msgs = (ArrayList<String>)application.getAttribute("msgs");

			if(msgs != null) {
				for(String msg : msgs) {
					out.println("<li>" + msg + "</li>");
				}
			}
%>
		</ul>
	</div>
</div>
</body>
</html>