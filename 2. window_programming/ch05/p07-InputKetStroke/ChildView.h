
// ChildView.h : CChildView Ŭ������ �������̽�
//


#pragma once


// CChildView â

class CChildView : public CWnd
{
// �����Դϴ�.
public:
	CChildView();
	CPoint p;
	bool filled;
// Ư���Դϴ�.
public:

// �۾��Դϴ�.
public:

// �������Դϴ�.
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// �����Դϴ�.
public:
	virtual ~CChildView();

	// ������ �޽��� �� �Լ�
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};
