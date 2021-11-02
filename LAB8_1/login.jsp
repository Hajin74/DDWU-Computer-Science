<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>login</title>
	<link rel="stylesheet" href="./style.css">
</head>
<body>
<header>
	<img src="./images/header.JPG" >
</header>
<section>
	<h1>로그인</h1>
	<div class="main">
		<form action="result.jsp" method="POST" name="form1">
			<table>
				<tr>
					<th rowspan="5"><img src="./images/login.JPG" ></th>
					<th colspan="2">회원님의 아이디와 비밀번호를 정확히 입력하세요.</th>
				</tr>
				<tr>
					<td></td>
					<td>
						<select name="type">
							<option value="학부생" selected>학부생</option>
							<option value="대학생">대학생</option>
							<option value="대학원생">대학원생</option>
						</select>
					</td>
				</tr>
				<tr>
					<th>아이디</th>
					<td>
						<input type="text" name="strID"/>
					</td>
				</tr>
				<tr>
					<th>비밀번호</th>
					<td>
						<input type="password" name="strPwd"/>
					</td>
				</tr>
				<tr>
					<td colspan="2">
						<input type="submit" value="로그인" style="width:60px" >
						<input type="button" value="가입하기" style="width:80px" onclick="document.location='member2.html'">
					</td>
				</tr>
			</table>
		</form>
	</div>
</section>
</body>
</html>