
// p08-showcursorPosView.cpp : Cp08showcursorPosView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "p08-showcursorPos.h"
#endif

#include "p08-showcursorPosDoc.h"
#include "p08-showcursorPosView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cp08showcursorPosView

IMPLEMENT_DYNCREATE(Cp08showcursorPosView, CView)

BEGIN_MESSAGE_MAP(Cp08showcursorPosView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cp08showcursorPosView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// Cp08showcursorPosView 생성/소멸

Cp08showcursorPosView::Cp08showcursorPosView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

Cp08showcursorPosView::~Cp08showcursorPosView()
{
}

BOOL Cp08showcursorPosView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// Cp08showcursorPosView 그리기

void Cp08showcursorPosView::OnDraw(CDC* /*pDC*/)
{
	Cp08showcursorPosDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// Cp08showcursorPosView 인쇄


void Cp08showcursorPosView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cp08showcursorPosView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void Cp08showcursorPosView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void Cp08showcursorPosView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void Cp08showcursorPosView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Cp08showcursorPosView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Cp08showcursorPosView 진단

#ifdef _DEBUG
void Cp08showcursorPosView::AssertValid() const
{
	CView::AssertValid();
}

void Cp08showcursorPosView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cp08showcursorPosDoc* Cp08showcursorPosView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cp08showcursorPosDoc)));
	return (Cp08showcursorPosDoc*)m_pDocument;
}
#endif //_DEBUG


// Cp08showcursorPosView 메시지 처리기
