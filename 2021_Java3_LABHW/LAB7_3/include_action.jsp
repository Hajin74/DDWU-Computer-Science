<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>LAB7_3</title>
<link rel="stylesheet" type="text/css" href="style.css"></link>
</head>
<body>
	<h1>Include Action Practice</h1>
	<table>
		<tr>
			<td>
				<jsp:include page="calendar.jsp">
					<jsp:param name="year" value="2021" />
					<jsp:param name="month" value="10" />
				</jsp:include>
			</td>
			<td>
				<jsp:include page="news.jsp">
					<jsp:param name="task1" value="eat" />
					<jsp:param name="task2" value="stduy" />
					<jsp:param name="task3" value="sleep" />
				</jsp:include>
			</td>
		</tr>
	</table>
</body>
</html>