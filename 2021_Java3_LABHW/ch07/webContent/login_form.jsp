<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>사용자 정보 입력 화면</title>
<style>
	.login_form {
		border-collapse: collapse;
	}
	.login_form, td {
		border: 1px solid black;
		padding: 10px 0;
	}
</style>
</head>
<body>
<div align="center">
	<h2>로그인</h2><hr>
	<form method="post" action="login.jsp" name="form1">
		<table class="login_form">
			<tr>
				<td colspan="2">로그인</td>
			</tr>
			<tr>
				<td>아이디</td>
				<td><input type="text" name="userid"></td>
			</tr>
			<tr>
				<td>비밀번호</td>
				<td><input type="password" name="userpw"></td>
			</tr>
			<tr>
				<td colspan="2"><input type="submit" value="로그인"></td>
			</tr>
		</table>
	</form>
</div>
</body>
</html>