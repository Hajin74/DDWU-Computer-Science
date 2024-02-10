<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
	<meta charset="EUC-KR">
	<title>include</title>
	<style>
		.include {
			margin: 0 auto;
		}
	</style>
</head>
<body>
	<h1>include 지시어 연습</h1><hr>
	<table class="include">
		<tr>
			<td>
				<%@ include file="calendar.jsp" %>
			</td>
			<td>
				&nbsp;&nbsp;&nbsp;
			</td>
			<td>
				<%@ include file="news.jsp" %>
			</td>
		</tr>
	</table>
	
</body>
</html>