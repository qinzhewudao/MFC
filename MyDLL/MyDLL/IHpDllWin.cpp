// IHpDllWin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MyDLL.h"
#include "IHpDllWin.h"
#include "afxdialogex.h"


// IHpDllWin �Ի���

IMPLEMENT_DYNAMIC(IHpDllWin, CDialog)

IHpDllWin::IHpDllWin(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_IHPDLLWIN, pParent)
{

}

IHpDllWin::~IHpDllWin()
{
}

void IHpDllWin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(IHpDllWin, CDialog)
END_MESSAGE_MAP()


// IHpDllWin ��Ϣ�������
// ���嵼���ӿ�

extern "C" __declspec(dllexport) IHpDllWin* ShowDialog()

{

	// �мǣ��˴���Ҫ���������д��룬��Ȼ�Ի�����ʾ��������

	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	IHpDllWin *ph = new IHpDllWin;

	ph->Create(IHpDllWin::IDD);

	ph->ShowWindow(SW_SHOW);

	return ph;

}