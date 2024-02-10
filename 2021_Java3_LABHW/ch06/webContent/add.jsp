<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.util.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>상품 추가 화면</title>
</head>
<body>
<%
	request.setCharacterEncoding("utf-8");

	String productname = request.getParameter("product"); // 선택된 상품 가져오기
	ArrayList list = (ArrayList)session.getAttribute("productlist"); // 세션에 상품 목록 마련하기
	
	if(list == null) {
		list = new ArrayList(); // 없으면 리스트를 만들어서
		session.setAttribute("productlist", list); // 세션에다 속성으로 설정
	}
	
	list.add(productname); // 상품 목록에 선택된 상품 추가하기
%>
<script>
	alert("<%=productname%>이 추가되었습니다!");
	history.go(-1);
</script>
</body>
</html>