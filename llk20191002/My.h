#pragma once


// My �Ի���

class My : public CDialog
{
	DECLARE_DYNAMIC(My)

public:
	My(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~My();

// �Ի�������
	enum { IDD = IDD_LLK20191002_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
