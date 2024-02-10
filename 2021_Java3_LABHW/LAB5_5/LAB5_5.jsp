<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>이미지 리스트</title>
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
		String[] images = {"smile.jpg", "star.jpg", "clover.jpg", "heart.jpg", "sad.jpg"};
		String[] name = {"미소", "별", "클로버", "하트", "슬픔"};
		//out.println("<img src=\"./images/" + images[0] + "\" >");
		
		out.println("<ul>");
		out.println("<li><span class=\"s1\">[이미지]</span><span class=\"s1\">[이미지명]</span><span class=\"s1\">[설명]</span></li>");
		for(int i = 0; i < 5; i++) {
			out.println("<li>");
			out.println("<img src=\"./images/" + images[i] + "\" >");
			out.println("<span>" + name[i] + "</span>");
			out.println("<textarea>이 이미지는...</textarea>");
			out.println("</li>");
		}
		out.println("</ul>");
	%>
</body>
</html>