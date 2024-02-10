<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!-- 컴퓨터학과 20200988 유하진 크롬 -->
<!-- order_result.jsp -->

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>상품 주문서</title>
	<style>

		#info1, #info2, #info3 {
			width: 80%;
			border: 1px solid black;
			margin: 10px 0;
		}
		.info_title {
			font-weight: bold;
			color: purple;
			margin: 5px 0;
		}
		#order_result_cnt span {
			font-weight: bold;
		}
		#order_result_cnt {
			width: 100%;
			padding: 20px;
		}
	</style>
	<script>
		function check_input() {
			if(frm.uname.value == "") {
				frm.uname.focus();
			}
		}
	</script>
</head>
<body>
<h2 style="font-weight: bold; margin-top:20px; margin-left: 10px;">상품 주문서</h2>
<div id="order_result_cnt">
	<form action="forward_result.jsp" method="post" id="frm">
		<div id="info1">
			<p class="info_title">개인 정보</p>
			<span>이름</span> <input type="text" id="uname" name="uname" placeholder="여백없이 입력"/><br>
			<span>연락처</span> <input type="text" id="tel1" name="tel1" placeholder="연락가능한 번호"/>
		</div>
		<div id="info2">
			<p class="info_title">배송지 정보</p>
			<span>주소</span> <input type="text" name="addr"/>
			<input type="button" value="중복확인"/><br>
			<span>전화번호</span> 
			<select name="phone1">
				<option value="010">010</option>
				<option value="010">02</option>
				<option value="010">032</option>
				<option value="010">031</option>
			</select>-
			<input type="text" name="phone2" size="7"/>-
			<input type="text" name="phone3" size="7"/><br>
			<span>메 모</span><textarea name="comment"></textarea>
		</div>
		<div id="info3">
			<p class="info_title">주문 정보</p>
			<input type="checkbox" name="coffeeBeans" value="0">과테말라 안티구아 (100g)
			<input type="text" name="beansNum" value="0">개<br>
			<input type="checkbox" name="coffeeBeans" value="1">인도네시아 만델링 (100g)
			<input type="text" name="beansNum"  value="0">개<br>
			<input type="checkbox" name="coffeeBeans" value="2">NAMOO(블렌딩) (100g)
			<input type="text" name="beansNum"  value="0">개<br>
			<input type="checkbox" name="coffeeBeans" value="3">에티오피아 시다모 (100g)
			<input type="text" name="beansNum"  value="0">개<br>
			<input type="checkbox" name="coffeeBeans" value="4">에티오피아 예가체프 (100g)
			<input type="text" name="beansNum"  value="0">개<br>
		</div>
		<input type="submit" value="주문하기" onClick="check_input()">
		<input type="reset" value="다시작성">
	</form>
</div>
</body>
</html>