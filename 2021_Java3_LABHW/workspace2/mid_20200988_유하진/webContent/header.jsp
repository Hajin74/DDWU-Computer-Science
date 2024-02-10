<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- header.jsp -->

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>header.jsp</title>
	<style>
		* {
			margin: 0;
			padding: 0;
		}
		#header {
			width: 100%;
		}
		#header_ul {
			background-color: black;
			color: white;
			padding: 10px 0;
		}
		#header_ul ul {
			display: flex;
			justify-content: center;
		}
		#header_ul ul li {
			list-style: none;
			margin: 0 10px;
		}
		#header_ul ul li:hover, #header_ul ul li a:hover {
			color: yellow;
		}
		#header_ul ul li:visited {
			color: white;
		}
		#header_ul ul li a {
			color: white;
			text-decoration: none;
		}
	</style>
</head>
<body>
<div id="header">
	<div id="header_ul">
		<ul>
			<li><a href="index.jsp">카페소개</a></li>
			<li>이 달의 추천</li>
			<li><a href="order.jsp">상품 주문서</a></li>
		</ul>
	</div>
	
	<div id="header_img">
		<img src="./images/header_s.jpg" alt="header" />
	</div>
</div>
</body>
</html>