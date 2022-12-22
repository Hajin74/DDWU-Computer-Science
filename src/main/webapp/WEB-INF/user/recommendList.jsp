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
.recommendbox {
	margin-top: 30px;
}

.list {
	font-weight: bold;
	font-size: 12px;
	color: #6f263d;
}

.btn_wish {
	color: white;
	box-shadow: 0 2px 2px 0 rgba(0, 0, 0, 0.25);
	border: solid 1px #6f263d;
	border-radius: 0.7em;
	background-color: #6f263d;
	padding-top: 0px;
	font-weight: bold;
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

.card-title {
	font-size: 16px;
	font-weight: bold;
}

.recommend-card {
	text-align: center;
	margin-bottom: 10px;
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
</style>
</head>
<body>
	<div class="recommendbox">
		<p class="list-cnt">💞 추천하는 강의 💞</p>
		
		<c:if test="${othersDibList[0].lecID eq null}"> 
			<h6 class="text-danger">⛔ 데이터가 충분하지 않아 추천할 강의가 없습니다. ⛔</h6>
		</c:if>
		
		<c:if test="${othersDibList[0].lecID ne null}"> 
			<c:forEach var="othDib" items="${othersDibList}">
				<div class="card-border card recommend-card" style="width: 15rem;">
					<div class="card-body">
						<h5 class="card-title">${othDib.title}</h5>
						${othDib.professor}
						<p></p>
						${othDib.lecID} <br>${othDib.week}[${othDib.lecTime}]
						${othDib.loc}
					</div>
				</div>
			</c:forEach>
		</c:if>
	</div>
	
	<script
		src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"
		integrity="sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p"
		crossorigin="anonymous"></script>
</body>
</html>
