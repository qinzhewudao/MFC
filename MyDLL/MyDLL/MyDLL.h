// MyDLL.h : MyDLL DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMyDLLApp
// �йش���ʵ�ֵ���Ϣ������� MyDLL.cpp
//

class CMyDLLApp : public CWinApp
{
public:
	CMyDLLApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
