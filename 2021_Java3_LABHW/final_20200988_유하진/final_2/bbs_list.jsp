<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- bbs_list.jsp -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8" import="java.util.*" %>

<%
	request.setCharacterEncoding("UTF-8");

	String writer = request.getParameter("writer");
	String article = request.getParameter("article");
	String category = request.getParameter("category");
	String item = writer + "/" + article + "/" + category;

	ArrayList<String> list = (ArrayList<String>)application.getAttribute("bbslist");
	if(list == null) {
		list = new ArrayList<String>();
		application.setAttribute("bbslist", list);
	}
	
	list.add(item);
%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>bbs_list.jsp</title>
</head>
<body>
<div align="center">
	<h2>게시글(전체보기)</h2>
	<a href="bbs_form.jsp">게시글 추가</a><hr>
	
<%
		ArrayList<String> blist = (ArrayList<String>)application.getAttribute("bbslist");
		if(blist == null) {
			out.println("작성한 게시글이 없습니다.");
		} else {
			int count = 1;
			for(Object li : blist) {
				out.println(count + "." + li + "<br>");
				count++;
			}
		}
%>
</div>
</body>
</html>
