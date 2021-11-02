<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>4</title>
</head>
<body>
<%
	String opentags[] = {"<h1>", "<h2>", "<h3>", "<h4>", "<h5>", "<h6>"};
	String closingtags[] = {"</h1>", "</h2>", "</h3>", "</h4>", "</h5>", "</h6>"};

	for(int i = 0; i < 6; i++) {
		out.print(opentags[i] + "Python" + closingtags[i]);
	}
%>
</body>
</html>