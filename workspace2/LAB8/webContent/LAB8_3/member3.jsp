<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>회원가입</title>
	<link rel="stylesheet" href="practice02.css">
</head>
<body>
<header>
	<img src="./images/header.JPG" alt="header" style="width:100%">
</header>
	<form action="LAB8_3.jsp" method="POST">
		<table>
			<tr>
				<th colspan="2">회원가입</th>
			</tr>
			<tr>
				<th>아이디</th>
				<td>
					<input type="text" name="userID">
					<input type="button" value="중복확인">
				</td>
			</tr>
			<tr>
				<th>패스워드</th>
				<td>
					<input type="password" name="userPwd">
				</td>
			</tr>
			<tr>
				<th>성별</th>
				<td>
					<input type="radio" name="gender" value="0">남
					<input type="radio" name="gender" value="1" checked>여
				</td>
			</tr>
			<tr>
				<th>국적</th>
				<td>
					<input type="text" name="nation">
					<input type="button" value="국적변경">
				</td>
			</tr>
			<tr>
				<th>휴대폰</th>
				<td>
					<select name="phone1">
						<option value="0" selected>010</option>
						<option value="1">070</option>
						<option value="2">080</option>
						<option value="3">02</option>
					</select> -
					<input type="text" name="phone2" size="3"> -
					<input type="text" name="phone3" size="3">
				</td>
			</tr>
			<tr>
				<th>이메일</th>
				<td>
					<input type="email" name="email">
				</td>
			</tr>
			<tr>
				<th>생일</th>
				<td>
					<input type="date" name="birth">
				</td>
			</tr>
			<tr>
				<th>관심분야</th>
				<td>
					<input type="checkbox" name="hobby" value="0">뉴스
					<input type="checkbox" name="hobby" value="1">맛집
					<input type="checkbox" name="hobby" value="2">책
					<input type="checkbox" name="hobby" value="3">영화
					<input type="checkbox" name="hobby" value="4">여행
				</td>
			</tr>
			<tr>
				<th>가입인사</th>
				<td>
					<textarea cols=40 rows=7>회원들에게 가입인사를 남기세요.</textarea>
					<!-- placeholder는 글이 지워짐 -->
				</td>
			</tr>
			<tr>
				<th>증명사진</th>
				<td>
					<input type="file">
				</td>
			</tr>
			<tr>
				<th colspan="2">
					<input type="submit" value="가입하기">
					<input type="reset" value="다시작성">
				</th>
			</tr>
		</table>
	</form>
</body>
</html>