<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- bbs_form.jsp -->
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>bbs_form.jsp</title>
</head>
<body>
	<h2>게시판</h2><hr>
	
	<form method="post" action="bbs_list.jsp">
		작성자 : <input type="text" name="writer" /><br>
		작성글 : <input type="text" name="article" size="60" /><br>
		
		글분류 :
		<select name="category">
			<option>영화</option>
			<option>맛집</option>
			<option>뉴스</option>
		</select><br>
		
		<input type="submit" value="등록" />
		<input type="reset" value="다시쓰기" />
	</form>
</body>
</html>
