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
		<form action="result.jsp" method="post" name="form1">
<!-- 
LAB8_2_1
1)
http://localhost:8080/LAB8/LAB8_1/result.jsp
전달되는 값이 보이지 않는다.

2)
request.setCharacterEncoding("UTF-8")을 해주어서 한글을 잘 받을 수 있도록 한다.

3)
영어로만 입력이 된다.

LAB8_2_2
1)
http://localhost:8080/LAB8/LAB8_1/result.jsp?type=%ED%95%99%EB%B6%80%EC%83%9D&strID=dd&strPwd=d
전달되는 값이 다 보인다.

2)
request.setCharacterEncoding("UTF-8")을 해주어서 한글을 잘 받을 수 있도록 한다.

3)
영어로만 입력이 된다.

LAB8_2_3
1)
get방식이 default로 지정된다.
주소에 값을 실어서 보내는 것이 보인다.
 -->
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