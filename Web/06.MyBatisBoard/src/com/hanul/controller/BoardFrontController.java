package com.hanul.controller;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.hanul.action.Action;
import com.hanul.action.ActionForward;
import com.hanul.action.BoardDeleteAction;
import com.hanul.action.BoardDetailAction;
import com.hanul.action.BoardInsertAction;
import com.hanul.action.BoardListAction;
import com.hanul.action.BoardSearchAction;
import com.hanul.action.BoardUpdateAction;
import com.hanul.action.BoardUpdateFormAction;

@WebServlet("/BoardFrontController.do")
public class BoardFrontController extends HttpServlet {

	protected void service(HttpServletRequest request, 
						   HttpServletResponse response) 
					throws ServletException, IOException {
		// ① 클라이언트가 어떤 요청을 했는가 파악한다.
		request.setCharacterEncoding("utf-8");
		String uri = request.getRequestURI();			//uri-pattern 값 : /mbb/xxx.do
		String ctx = request.getContextPath();			//Context root 값 : /mbb
		String command = uri.substring(ctx.length());	//실제 요청한 페이지 : /xxx.do
		//System.out.println("uri : " + uri);
		//System.out.println("ctx : " + ctx);
		//System.out.println("command : " + command);
		
		// ② 클라이언트 요청(*.do → command)과 실제 처리할 비즈니스 로직(Action Class)
		//	 servlet(FrontController.java) → class(Action.java)
		Action action = null;
		ActionForward forward = null;
		
		if (command.equals("/boardList.do")) {
			action = new BoardListAction();
			forward = action.excute(request, response);
		} else if(command.equals("/boardInsertForm.do")) {	//글쓰기 폼으로 화면 전환
			forward = new ActionForward();
			forward.setPath("board/boardInsertForm.jsp");
			forward.setRedirect(false);
			// 가져갈 게 없으므로 sendRedirect로 하면 되지만
			// url이 바뀌지 않아야 하므로 forward방식으로 전달
		} else if(command.equals("/boardInsert.do")) {
			action = new BoardInsertAction();
			forward = action.excute(request, response);
			// 여기서 forward에 null이라는 값이 들어오므로 밑의 코드가 실행이 되지 않는다.
		} else if(command.equals("/boardDetail.do")) {
			action = new BoardDetailAction();
			forward = action.excute(request, response);
		} else if(command.equals("/boardDelete.do")) {
			action = new BoardDeleteAction();
			forward = action.excute(request, response);
		} else if(command.equals("/boardUpdateForm.do")) {
			action = new BoardUpdateFormAction();
			forward = action.excute(request, response);
		} else if(command.equals("/boardUpdate.do")) {
			action = new BoardUpdateAction();
			forward = action.excute(request, response);
		} else if(command.equals("/boardSearch.do")) {
			action = new BoardSearchAction();
			forward = action.excute(request, response);
		}
		
		// ③ 페이지 전환(프리젠테이션 로직 수행) : forward(), sendRedirect
		//	 ActionForward.java가 담당
		if (forward != null) {
			if (forward.isRedirect()) {		//true : sendRedirect() 페이지 전환
				response.sendRedirect(forward.getPath());
			} else {					// false : forward() 페이지 전환
				RequestDispatcher rd = request.getRequestDispatcher(forward.getPath());
				rd.forward(request, response);
			}
		}
		
	}//service()
	
}//class
