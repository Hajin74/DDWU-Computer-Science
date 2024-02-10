<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>LAB5_5</title>
<style>
	ul li {
		list-style: none;
		border-bottom: 1px solid black;
	}
	.s1 {
		font-size: 16px;
		font-weight: bold;
		color: green;
	}
	ul li span {
		margin: 0px 150px 40px 30px;
		vertical-align: middle;
	}
	img {
		width: 100px;
		height: 100px;
		text-align: center;
		margin-right: 150px;
		vertical-align: middle;
	}
	textarea {
		vertical-align: middle;
	}
</style>
</head>
<body>
<%
	String imgName[] = {"미소", "별", "클로버", "하트", "슬픔"};
	String imgs[] = {"smile.jpg", "star.jpg", "clover.jpg", "heart.jpg", "sad.jpg"};

	out.print("<ul>");
	out.print("<li class=\"list-1\"><span class=\"s1\">[이미지]</span><span class=\"s1\">[이미지명]</span><span class=\"s1\">[설명]</span></li>");
	
	for(int i = 0; i < 5; i++) {
		out.print("<img src=\'images/" + imgs[i] + "\'><span>" + imgName[i] + "</span>");
		out.print("<textarea rows=5 cols=50>이 이미지는...</textarea>");
	}
	
	out.print("</ul>");
%>
</body>
</html>