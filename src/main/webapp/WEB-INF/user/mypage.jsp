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
	
}
.dList {
	float: left;
	
}
.rlist {
	float: right;
	
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
	<jsp:include page="../user/admin.jsp"></jsp:include>
	
	<% 
	} else { 
		System.out.println("일반사용자시네요");
	%>
	<!--관리자가 아닌, 일반사용자라면-->
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