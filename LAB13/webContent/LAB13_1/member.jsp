<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>LAB13_1</title>
<link rel="stylesheet" href="./style.css">
</head>
<body>
<header>
	<img src="./images/header.jpg" >
</header>
<section>
	<form action="LAB13_1.jsp" method="POST">
		<table>
			<tr>
				<th colspan="2">회원가입</th>
			</tr>
			<tr>
				<th>아이디</th>
				<td>
					<input type="text" name="id" size="15"/>
					<button>중복확인</button>
				</td>
			</tr>
			<tr>
				<th>패스워드</th>
				<td>
					<input type="password" name="pw" size="15"/>
				</td>
			</tr>
			<tr>
				<th>성별</th>
				<td>
					<input id="user-gen" type="radio" name="gender" value="0"/>남
					<input id="user-gen" type="radio" name="gender" value="1" checked/>여
				</td>
			</tr>
			<tr>
				<th>국적</th>
				<td>
					<input type="text" id="nation" name="nation" placeholder="대한민국"/>
					<button>국적변경</button>
				</td>
			</tr>
			<tr>
				<th>휴대폰</th>
				<td>
					<select name="phone1">
						<option value="0">010</option>
						<option value="1">080</option>
						<option value="2">070</option>
						<option value="3">02</option>
					</select> -
					<input type="tel" name="phone2" size="3"/> -
					<input type="tel" name="phone3" size="3"/>
				</td>
			</tr>
			<tr>
				<th>이메일</th>
				<td>
					<input type="email" name="email" size="40"/>
				</td>
			</tr>
			<tr>
				<th>생일</th>
				<td>
					<input type="text" name="birth"/>
				</td>
			</tr>
			<tr>
				<th>관심분야</th>
				<td>
					<input type="checkbox" id="user-hobby" name="hobby" value="0" />뉴스
					<input type="checkbox" id="user-hobby" name="hobby" value="1" />맛집
					<input type="checkbox" id="user-hobby" name="hobby" value="2" />책
					<input type="checkbox" id="user-hobby" name="hobby" value="3" />영화
					<input type="checkbox" id="user-hobby" name="hobby" value="4" />여행
				</td>
			</tr>
			<tr>
				<th>가입인사</th>
				<td>
					<textarea name="memo" rows="5" cols="60" placeholder="회원들에게 간단한 가입인사를 남겨주세요"></textarea>
				</td>
			</tr>
			<tr>
				<th>증명사진</th>
				<td>
					<input type="file" accept=".png, .jpg, .jpeg" />
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
</section>
</body>
</html>
