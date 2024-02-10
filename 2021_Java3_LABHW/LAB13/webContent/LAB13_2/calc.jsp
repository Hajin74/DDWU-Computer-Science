<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>계산기</title>
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
					<input type="text" name="op1" /><br>
					<select name="operator">
						<option>+</option>
						<option>-</option>
						<option>*</option>
						<option>/</option>
					</select><br>
					<input type="text" name="op2" /><br>
					<input type="submit" value="=" />
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
