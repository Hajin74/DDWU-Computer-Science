<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>�̹��� ����Ʈ</title>
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
		String[] name = {"�̼�", "��", "Ŭ�ι�", "��Ʈ", "����"};
		//out.println("<img src=\"./images/" + images[0] + "\" >");
		
		out.println("<ul>");
		out.println("<li><span class=\"s1\">[�̹���]</span><span class=\"s1\">[�̹�����]</span><span class=\"s1\">[����]</span></li>");
		for(int i = 0; i < 5; i++) {
			out.println("<li>");
			out.println("<img src=\"./images/" + images[i] + "\" >");
			out.println("<span>" + name[i] + "</span>");
			out.println("<textarea>�� �̹�����...</textarea>");
			out.println("</li>");
		}
		out.println("</ul>");
	%>
</body>
</html>