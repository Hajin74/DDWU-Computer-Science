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
				<th style="padding:10px 0px">������ �߻��Ͽ����ϴ�.</th>
			</tr>
		</thead>
		<tbody>
			<tr>
				<td>
					<img src="images/flower.png" >
					���� �߻� �ð�: 
					<%= new java.util.Date() %>
					<p>�ִ��� ���� ��ġ�ϰڽ��ϴ�.</p>
				</td>
			</tr>
		</tbody>
	</table>
</body>
</html>