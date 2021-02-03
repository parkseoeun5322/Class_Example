<%@ page import="com.member.study.MemberDTO"%>
<%@ page import="java.util.ArrayList"%>
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%
	ArrayList<MemberDTO> list = (ArrayList<MemberDTO>) request.getAttribute("list");
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>member_list</title>
<script type="text/javascript">
	function fnDelete(member_id) {
		//alert(member_id);
		if (confirm("정말 삭제하시겠습니까?")) {
			location.href = "memberDeleteAction.me?member_id=" + member_id;
		}
	}
</script>
</head>
<body>
	<div align="center">
		<h3>[전체 회원 리스트]</h3>
		<table border="1">
			<tr>
				<th>아이디</th>
				<th>이름</th>
				<th>삭제</th>
			</tr>
			<c:forEach var="i" items="${list }">
				<tr align="center">
					<td><a href="memberViewAction.me?member_id=${i.member_id }">${i.member_id }</a></td>
					<td>${i.member_name }</td>
					<td>
						<c:if test="${i.member_id eq 'admin' }">삭제금지</c:if>
						<c:if test="${i.member_id ne 'admin' }">
							<input type="button" value="삭제" onclick="fnDelete('${i.member_id}')"/>
						</c:if>
					</td>
				</tr>
			</c:forEach>
			<tr>
				<td colspan="3" align="center">
					<input type="button" value="로그아웃" onclick="location.href='memberLogout.me'" />
					<input type="button" value="게시판으로 이동" onclick="location.href='boardList.bo'" />
				</td>
			</tr>
				
		</table>
	</div>
</body>
</html>