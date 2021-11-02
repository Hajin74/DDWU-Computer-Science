<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="EUC-KR">
	<title>login</title>
	<link rel="stylesheet" href="member1.css">
</head>
<body>
<header>
		<img src="./images/header.JPG" alt="headerImg">
	</header>
	<div id="main">
		<h2>로그인</h2><hr>
		<form action="result.jsp" method="post" name="fm1">
			<table>
				<tr>
					<td rowspan="5" id="loginImg">
						<img src="./images/login.JPG" alt="loginImg">
					</td>
					<th colspan="2">회원님의 아이디와 비밀번호를 정확히 입력하세요.</th>
				</tr>
				<tr>
					<td></td>
					<td>
						<select name="type">
							<option value="학부생">학부생</option>
							<option value="대학원생">대학원생</option>
							<option value="교직원">교직원</option>
						</select>
					</td>
				</tr>
				<tr>
					<th>아이디</th>
					<td>
						<input type="text" name="strID">
					</td>
				</tr>
				<tr>
					<th>비밀번호</th>
					<td>
						<input type="password" name="strPwd">
					</td>
				</tr>
				<tr>
					<td colspan="2">
						<input type="submit" value="로그인" style="width: 60px">
						<input type="submit" value="가입하기" style="width: 80px">
					</td>
				</tr>
			</table>
		</form>
	</div>
</body>
</html>