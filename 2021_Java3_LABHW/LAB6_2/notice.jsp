<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR" isErrorPage="true"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>notice</title>
<style>
	.notice {
		width: 60%;
		margin-top: 20px;
		margin-bottom: 50px;
		margin: 0 auto;
		border-collapse: collapse;
		background-color: #FEDBBC;
		text-align: center;
	}
	.notice tbody {
		background-color: #FFF0D6;
	}
	.notice tbody img {
		width: 200px;
		margin-bottom: 20px;
	}
	.notice tbody td {
		display: flex;
		flex-direction: column;
		align-items: center;
		padding: 50px 0px;
	}
	header img {
		width: 100%;
	}
</style>
</head>
<body>
	<header>
		<img src="images/header.JPG">
	</header>
	<table class="notice">
		<thead>
			<tr>
				<th style="padding:10px 0px">오류가 발생하였습니다.</th>
			</tr>
		</thead>
		<tbody>
			<tr>
				<td>
					<img src="images/flower.png" >
					오류 발생 시간: 
					<%= new java.util.Date() %>
					<p>최대한 빨리 조치하겠습니다.</p>
				</td>
			</tr>
		</tbody>
	</table>
</body>
</html>