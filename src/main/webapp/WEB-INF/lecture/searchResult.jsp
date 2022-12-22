<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core"%>
<!doctype html>
<html lang="en">
<head>
<!-- Required meta tags -->
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">

<!-- Bootstrap CSS -->
<link
	href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css"
	rel="stylesheet"
	integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3"
	crossorigin="anonymous">

<title>Search Result</title>
<style>
.statusbox {
	margin: 0 auto;
}

.totalresult {
	margin-top: 35px;
	margin-left: 80px;
	padding-top: 20px;
}

.resultbox {
	margin-left: 50px;
	padding: 10px;
	box-shadow: 0 2px 2px 0 rgba(0, 0, 0, 0.25);
	border: solid 1px #efefef;
	border-radius: 0.7em;
	background-color: #efefef;
	width: 34.375rem;
	display: inline-block;
}

.keywordbox {
	margin: auto;
}

.hotbox {
	display: inline-block;
	float: right;
	margin-right: 160px;
}

.keywords {
	font-size: 12px;
	font-weight: bold;
	color: #6f263d;
	box-shadow: 0 2px 2px 0 rgba(0, 0, 0, 0.25);
	border: solid 1px #f1f1f1;
	border-radius: 0.7em;
	background-color: #fff;
	margin-left: 20px;
	margin-bottom: 10px;
	padding: 3px;
	text-align: center;
	width: 18%;
	float: left;
	font-weight: bold;
}

.list {
	font-weight: bold;
	font-size: 12px;
	color: #6f263d;
}

.btn_wish {
	float: right;
	color: white;
	margin-left: 5px;
	box-shadow : 0 2px 2px 0 rgba( 0, 0, 0, 0.25);
	border: solid 1px #6f263d;
	border-radius: 0.7em;
	background-color: #6f263d;
	padding-top: 0px;
	font-weight: bold;
	box-shadow: 0 2px 2px 0 rgba(0, 0, 0, 0.25);
}

.btn_wish:hover {
	font-weight: bold;
	border: 1px solid #6f263d;
	background-color: #fff;
	color: #6f263d;
	transition-duration: 1s;
}

.card-border {
	color: #6f263d;
	box-shadow: 0 2px 2px 0 rgba(0, 0, 0, 0.25);
	border: solid 1px #f1f1f1;
	border-radius: 1em;
	background-color: #fff;
	margin: auto;
	margin-bottom: 20px;
	padding: 3px;
}

.btn_delete {
	font-size: 14px;
	font-weight: bold;
	border: none;
	color: #6f263d;
	float: right;
	background-color: #fff;
}

.card-border {
	color: #6f263d;
	box-shadow: 0 2px 2px 0 rgba(0, 0, 0, 0.25);
	border: solid 1px #f1f1f1;
	border-radius: 1em;
	background-color: #fff;
	margin: auto;
	margin-bottom: 20px;
	padding: 3px;
}

.card-title {
	font-size: 16px;
	font-weight: bold;
}

.recommend-card {
	text-align: center;
	margin-bottom: 10px;
}

.btn_delete {
	font-size: 14px;
	font-weight: bold;
	border: none;
	color: #6f263d;
	float: right;
	background-color: #fff;
}

.list-cnt {
	color: #6f263d;
	font-size: 18px;
	margin-bottom: 10px;
	font-weight: bold;
	text-align: center;
}

.text-danger {
	text-align: center;
	font-weight: bold;
}

.statusCheckFormCss {
	margin-left: 50px;
	margin-bottom: 10px;
	width: 34.375rem;
	text-align: right;
	color: #6f263d;
	font-weight: bold;
}

input[type=checkbox] {
	accent-color: #6f263d;
}

.btn_status {
	margin-right: 10px;
}

.btn_status_delete {
	color: #6f263d;
	background-color: #fff;
}
</style>
</head>
<body>

	<jsp:include page="../header.jsp"></jsp:include>
	<jsp:include page="../nav.jsp"></jsp:include>

	<div class="statusbox">
		<c:if test="${resultLecList ne '[]'}">
			<form class="statusCheckFormCss" name="statusCheckForm">
				<input type="checkbox" name="statusCheck" id="statusCheck" value="statusIncludeO" /> 과거 수강한 강의 X
			</form>
	
			<c:forEach var="lec" items="${resultLecList}">
				<div class="card-border card" style="width: 30rem;">
					<div class="card-body">
						<span class="card-title"> ${lec.title}
							<button class="btn_delete" type="button">X</button>
						</span><br> ${lec.professor}
						<p></p>
						${lec.lecID} <br>${lec.week}[${lec.lecTime}] ${lec.loc}
						<button class="btn_wish" type="button">♡ 찜하기</button>
						<button class="btn_wish" type="button">이미 수강됨</button>
					</div>
				</div>
			</c:forEach>
		</c:if>
	</div>

	<div class="totalresult">
		<div class="resultbox">
			<p class="list-cnt">📦 검색 결과 📦</p>
			<div class="keywordbox">
				<c:forEach var="keyword" items="${keywordList}">
					<div class="keywords">${keyword}</div>
				</c:forEach>
			</div>

			<!-- <div class="list-cnt">총 10건</div> -->
			<c:if test="${searchFailed}">
				<h6 class="text-danger">⛔ Keyword를 선택하지 않으셨으므로, 전체 강의를 검색합니다. ⛔
				</h6>
			</c:if>

			<!--  검색 결과 -->
			<c:forEach var="lec" items="${lecList}">
				<div class="card-border card" style="width: 30rem;">
					<div class="card-body">
						<span class="card-title"> ${lec.title} </span><br>
						${lec.professor}
						<p></p>
						${lec.lecID} <br>${lec.week}[${lec.lecTime}] ${lec.loc}
						<form action="<c:url value='/lecture/searchResult/createDib'/>">
							<button class="btn_wish" id="btn_before" name="lecID"
								value="${lec.lecID}" onClick="checkUser()">♡ 찜하기</button>

							<c:forEach var="resLec" items="${resultLecList}">
								<c:choose>
									<c:when test="${lec.lecID eq resLec.lecID}">
										<button class="btn_wish btn_status" type="button"
											onclick="status_Btn_Delete()">수강됨</button>
									</c:when>

									<c:otherwise>
										<button class="btn_wish btn_status btn_status_delete"
											type="button" onclick="status_Btn_Add()">수강</button>
									</c:otherwise>
								</c:choose>
							</c:forEach>
						</form>
					</div>
				</div>
			</c:forEach>
		</div>

		<!--  인기 있는 강의 List -->
		<div class="hotbox">
			<p class="list-cnt">✨인기 있는 강의✨</p>
			<c:forEach var="hotLec" items="${hotLecList}">
				<div class="card-border card recommend-card" style="width: 15rem;">
					<div class="card-body">
						<h5 class="card-title">${hotLec.title}</h5>
						${hotLec.professor}
						<p></p>
						${hotLec.lecID} <br>${hotLec.week}[${hotLec.lecTime}]
						${hotLec.loc}
					</div>
				</div>
			</c:forEach>
		</div>

		<script
			src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"
			integrity="sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p"
			crossorigin="anonymous"></script>

	</div>
</body>
<script>
	$("button").click(function() {
		toggleClass(".btn_wish_active");
	});

	function checkUser() {
		var userId = sessionStorage
				.getItem(
<%=session.getAttribute("userId")%>
	);
		console.log(userId);
		if (userId == null)
			alert("회원만 찜 할 수 있습니다.");
	}

	function changeBtn() {
		const btn1 = document.getElementById('btn_before');

		if (btn1.style.display !== 'none') {
			btn1.style.display = 'none';
		}

	}

	function status_Btn_Add() {
		alert('해당 과목을 수강하셨습니다.');
	}

	function status_Btn_Delete() {
		alert('해당 과목을 수강 취소했습니다.');
	}
</script>
</html>
