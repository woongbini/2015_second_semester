
// Simple.h : Simple ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CSimpleApp:
// �� Ŭ������ ������ ���ؼ��� Simple.cpp�� �����Ͻʽÿ�.

class CSimpleApp : public CWinApp {
public:
	CSimpleApp();


// �������Դϴ�. (Override�ϰٵ�)
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

//�ܺο��� �������� ���� ����
extern CSimpleApp theApp;