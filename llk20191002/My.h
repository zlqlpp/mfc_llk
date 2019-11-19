#pragma once


// My 对话框

class My : public CDialog
{
	DECLARE_DYNAMIC(My)

public:
	My(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~My();

// 对话框数据
	enum { IDD = IDD_LLK20191002_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
