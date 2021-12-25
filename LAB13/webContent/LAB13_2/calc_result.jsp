<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<% request.setCharacterEncoding("UTF-8"); %>

<jsp:useBean id="calculator" class="LAB13.Calculator" scope="session" />
<jsp:setProperty name="calculator" property="*" />
<!-- 폼에서 입력받은 값이 여기로 왔기때문에 여기서 세터 설정을 함 -->

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>계산결과</title>
	<style>
		.calc {
			width: 50%;
			border-collapse: collapse;
		}
		.calc, .calc td, .calc th {
			border: 1px solid black;
		}
		.calc td {
			width: 50%;
			text-align: center;
		}
	</style>
</head>
<body>
<div align="center">
	<form method="post" action="calc_result.jsp">
		<table class="calc">
			<tr>
				<th colspan="2">계산기</th>
			</tr>
			<tr>
				<td><img src="./images/camp1.jpg" style="width:100%"></td>
				<td>
					<input type="text" value="${param.op1}"><br>
					<span>${param.operator}</span><br>
					<input type="text" value="${param.op2}"><br>
					<span>=</span><br>
					<input type="text" value="${calculator.calc()}"><br>
				</td>
			</tr>
			<tr>
				<td colspan="2">&nbsp;</td>
			</tr>
		</table>
	</form>
</div>
</body>
</html>
