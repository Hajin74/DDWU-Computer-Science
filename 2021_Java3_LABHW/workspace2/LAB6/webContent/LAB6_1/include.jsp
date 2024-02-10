<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>Include</title>
<style>
	h1 {
		text-align: center;
	}
	#include_table {
		border-collapse: collapse;
		width: 70%;
		margin: 0 auto;
	}
	#include_table td{
		text-align: left;
	}

</style>
</head>
<body>
	<h1>include 지시어 연습</h1><hr>
	<table id="include_table">
		<tr>
			<td><%@ include file="calendar.jsp" %></td>
			<td><%@ include file="news.jsp" %></td>
		</tr>
	</table>
</body>
</html>