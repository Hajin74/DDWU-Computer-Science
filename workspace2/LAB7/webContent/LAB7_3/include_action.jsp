<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>Include action</title>
</head>
<body>
	<h1>Include Action Practice</h1>
	<table>
		<tr>
			<td>
				<jsp:include page="calendar.jsp">
					<jsp:param name="year" value="2021" />
					<jsp:param name="month" value="11" />
				</jsp:include>
			</td>
			<td>
				<jsp:include page="news.jsp">
					<jsp:param name="task1" value="밥" />
					<jsp:param name="task2" value="efef" />
					<jsp:param name="task3" value="놀기" />
				</jsp:include>
			</td>
		</tr>
	</table>
</body>
</html>