<!-- 유하진 20200988 컴퓨터학과 크롬 -->
<%@ tag language="java" pageEncoding="UTF-8" description="item 출력 태그" %>

<%@ attribute name="bgcolor" %>
<%@ attribute name="border" %>

<jsp:useBean id="product" class="ch10.Product" />
<h2><jsp:doBody /></h2>
<table style="border:${border}px solid black; background-color: ${bgcolor}; width: 150px">
<%
	for(String item : product.getProductList()) {
		out.println("<tr><td>" + item + "</td></tr>");
	}
%>
</table>
