#pragma once


// IHpDllWin �Ի���

class IHpDllWin : public CDialog
{
	DECLARE_DYNAMIC(IHpDllWin)

public:
	IHpDllWin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~IHpDllWin();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IHPDLLWIN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
