<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- score_form.jsp -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>score_form.jsp</title>
	<style>
		.score_form {
			border_collapse: collapse;
		}
		.score_form, .score_form td {
			border: 1px solid black;
		}
		.score_form td {
			padding: 5px;
		}
	</style>
</head>
<body>
<div align="center">
	<h2>성적 등록</h2><hr>
	<form method="post" action="score_add.jsp">
		<table class="score_form">
			<tr>
				<td>이름</td>
				<td><input type="text" name="username" /></td>
			</tr>
			<tr>
				<td>국어</td>
				<td><input type="text" name="kor" /></td>
			</tr>
			<tr>
				<td>영어</td>
				<td><input type="text" name="eng" /></td>
			</tr>
			<tr>
				<td>수학</td>
				<td><input type="text" name="math" /></td>
			</tr>
			<tr>
				<td>학년</td>
				<td>
					<select name="group">
						<option>1</option>
						<option>2</option>
						<option>3</option>
					</select>
				</td>
			</tr>
			<tr>
				<td colspan="2" >
					<input type="submit" value="확인" />
					<input type="reset" value="취소" />
				</td>
			</tr>
		</table>
	</form>
</div>
</body>
</html>
