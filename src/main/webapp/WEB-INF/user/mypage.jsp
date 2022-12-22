<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<!DOCTYPE html>
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

<title>My Page</title>
<style>
.structure {
	width: 90%;
	margin: 10px auto;
	color: #6f263d;
}

.info {
	float: left;
	width: 20%;
}

.dList {
	float: left;
	width: 55%;
}

.rlist {
	float: right;
	width: 15%;
}

</style>

</head>
<body>
	<%
	HttpSession loginSession = request.getSession();
	System.out.println(loginSession.getAttribute("userId"));
	%>
	
	<!--  로그인이 됐으면-->
	<c:if test="${userId ne null}">
	
	<%
	// 관리자로 로그인하면 
	String id = (String)loginSession.getAttribute("userId");
	if(id.equals("admin")) {
		System.out.println("관리자시군요!");
	%>
	
	<jsp:include page="../header.jsp"></jsp:include>
	<jsp:include page="../nav.jsp"></jsp:include>
	<div class="adminPage">
		<div class="userList">
			<p class="list-cnt">📦 학생 리스트 📦</p>
			
			<c:forEach var="user" items="${stuList}">
					<div class="card-border card" style="width: 30rem;">
						<div class="card-body">
							<span class="card-title"> ${user.stuID} </span>
							<button class="btn_delete" type="submit">지우기</button>
						</div>
					</div>
			
			</c:forEach>
		</div>
			<div class="lectureList">
				<p class="list-cnt">📦 강의 리스트 📦</p>
		
				<c:forEach var="lec" items="${lecList}">
					<div class="card-border card" style="width: 30rem;">
						<div class="card-body">
							<span class="card-title"> ${lec.title}
							</span><br> ${lec.professor}
							<p></p>
							${lec.lecID} <br>${lec.week}[${lec.lecTime}]
							${lec.loc}
							<button class="btn_delete" type="submit">지우기</button>
						</div>
					</div>
				</c:forEach>
			</div>
	</div>
		
	<% 
	} else { 
		System.out.println("일반사용자시네요");
	%>
	<!--관리자가 아닌, 일반사용자라면  -->
		<jsp:include page="../header.jsp"></jsp:include>
		<jsp:include page="../nav.jsp"></jsp:include>
	
		<div class="structure">
			<div class="info">
		        <jsp:include page="userInfo.jsp">
					<jsp:param name="userId" value="userId" />
					<jsp:param name="major" value="major" />
		        </jsp:include>
      		</div>
			<div class="dList"><jsp:include page="dibList.jsp"></jsp:include></div>
     		<div class="rList"><jsp:include page="recommendList.jsp"></jsp:include></div>
		</div>
	<% } %>
	</c:if>
	
	<script
		src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"
		integrity="sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p"
		crossorigin="anonymous">
	</script>
	
</body>
</html>