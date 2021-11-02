<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<%
	int result = 0;

	if(request.getMethod().equals("POST")) {
		String op = request.getParameter("operator");
		
		int num1 = Integer.parseInt(request.getParameter("num1"));
		int num2 = Integer.parseInt(request.getParameter("num2"));

		if(op.equals("+")) {
			result = num1 + num2;
		} else if (op.equals("-")) {
			result = num1 - num2;
		} else if (op.equals("*")) {
			result = num1 * num2;
		} else if (op.equals("/")) {
			result = num1 / num2;
		}
	} 
%>
<html>
<head>
	<meta charset="utf-8">
	<title>계산기</title>
</head>
<body>
	<div align="center">
		<h3>계산기</h3><hr>
		<form name="form1" method="POST">
		
			<input type="text" name="num1" width=200 size=5>
			<select name="operator">
				<option selected>+</option>
				<option>-</option>
				<option>*</option>
				<option>/</option>
			</select>
			
			<input type="text" name="num2" width=200 size=5>
			<input type="submit" name="b1" value="계산">
			<input type="reset" value="다시입력" name="b2">
		</form>
		<hr>
		
		계산결과는 : <%= result %>
	</div>
</body>
</html>