package com.member.action;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.commons.action.Action;
import com.commons.action.ActionForward;
import com.member.study.MemberDAO;
import com.member.study.MemberDTO;

public class MemberViewAction implements Action{

	@Override
	public ActionForward execute(HttpServletRequest request, 
								 HttpServletResponse response)
		throws ServletException, IOException {
		
		HttpSession session = request.getSession();
		String id = (String) session.getAttribute("id");
		
		ActionForward forward = new ActionForward();
		if (id == null) {			//로그인이 되지 않았을 때
			forward.setPath("memberLogin.me");
			forward.setRedirect(true);
			return forward;
		} else if (!id.equals("admin")) {	// 정상적인 접근이 아닐 경우
			response.setContentType("text/html; charset=utf-8");
			PrintWriter out = response.getWriter();
			out.println("<script>alert('관리자가 아닙니다!');");
			out.println("location.href='boardList.bo';</script>");
			return null;	//위에서 페이지 전환을 했기 때문에
		} else {
		// 관리자 아이디로 로그인한 후, 회원관리 버튼을 눌렀을 경우
			String member_id = request.getParameter("member_id");
			MemberDAO dao = new MemberDAO();
			MemberDTO dto = dao.getDetailMember(member_id);
			request.setAttribute("dto", dto);
			
			forward.setPath("member/member_info.jsp");
			forward.setRedirect(false);
			return forward;
		}	
	} //execute()
} //class
