// llk20191002.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cllk20191002App:
// �йش����ʵ�֣������ llk20191002.cpp
//

class Cllk20191002App : public CWinApp
{
public:
	Cllk20191002App();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cllk20191002App theApp;