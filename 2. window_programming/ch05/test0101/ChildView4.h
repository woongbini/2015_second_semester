
// ChildView.h : CChildView 클래스의 인터페이스
//


#pragma once


// CChildView 창

class CChildView4 : public CWnd
{
// 생성입니다.
public:
	CChildView4();

// 특성입니다.
public:

// 작업입니다.
public:

// 재정의입니다.
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// 구현입니다.
public:
	virtual ~CChildView4();

	// 생성된 메시지 맵 함수
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
};

