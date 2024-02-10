<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>

<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core"%>
<!DOCTYPE html>
<html>
<head>
<style>
.adminPage {
	margin-top: 50px;
	max-width: 80%;
	display: flex;
	flex-direction: row;
	justify-content: space-around;
}

.user-form {
	max-width: 500px;
	padding: 180px;
	padding-top: 5px;
}

.list-cnt {
	color: #6f263d;
	font-size: 18px;
	margin-bottom: 10px;
	font-weight: bold;
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
</style>
</head>

<!-- Custom styles for this template -->
<link href="form-validation.css" rel="stylesheet">

<body>
	<div class="adminPage">
		<div class="userList user-form">
			<p class="list-cnt">📦 학생 리스트 📦</p>
			<c:forEach var="user" items="${stuList}">
				<div class="card-border card" style="width: 30rem;">
					<div class="card-body">
						<span class="card-title"> ${user.stuID} </span>
						<button class="btn_delete" type="submit">해당 학생 삭제하기</button>
					</div>
				</div>

			</c:forEach>
		</div>
		<div class="lectureList user-form">
			<p class="list-cnt">📦 강의 리스트 📦</p>

			<c:forEach var="lec" items="${lecList}">
				<div class="card-border card" style="width: 30rem;">
					<div class="card-body">
						<span class="card-title"> ${lec.title} </span><br>
						${lec.professor}
						<p></p>
						${lec.lecID} <br>${lec.week}[${lec.lecTime}] ${lec.loc}
						<button class="btn_delete" type="submit">해당 강의 삭제하기</button>
					</div>
				</div>
			</c:forEach>
		</div>
	</div>
</body>
</html>