<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h3>답글쓰기 화면</h3>
	
	<form action="reply_insert.no" method="post" enctype="multipart/form-data">
		<input type="hidden" name="root" value="${vo.root }" />
		<input type="hidden" name="indent" value="${vo.indent }" />
		<input type="hidden" name="step" value="${vo.step }" />
		<table>
			<tr>
				<th>제목</th>
				<td><input type="text" name="title" class="need" title="제목" /></td>
			</tr>
			<tr>
				<th>내용</th>
				<td><textarea name="content" class="need" title="내용"></textarea></td>
			</tr>
			<tr>
				<th>첨부 파일</th>
				<td class="left">
					<label>
						<input type="file" name="file" id="attach-file" />
						<img alt="파일 선택" class="file-img" src="img/select.png" />
					</label>
					<span id="file-name"></span>
					<span id="delete-file" style="color:red;">
						<i class="fas fa-times font-img"></i>
					</span>
				</td>
			</tr>
		</table>
	</form>
	<div class="btnSet">
		<a class="btn-fill" onclick="if( necessary() ) { $('form').submit() }">저장</a>
		<a class="btn-empty" href="javascript:history.go(-1)">취소</a>
	</div>
	
	<script type="text/javascript" src="js/need_check.js"></script>
	<script type="text/javascript" src="js/file_attach.js"></script>
</body>
</html>