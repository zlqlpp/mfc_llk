// llk20191002Dlg.h : 头文件
//

#pragma once


// Cllk20191002Dlg 对话框
class Cllk20191002Dlg : public CDialog
{
// 构造
public:
	Cllk20191002Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_LLK20191002_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	 
	DECLARE_MESSAGE_MAP()
public:
	int xx;
	int yy;
	afx_msg void ClickStartButton();
	int xxx;
	int yyy;
	CString qipanshuju;
	afx_msg void OnBnClickedButton2();
	 
	afx_msg void OnBnClickedButton4();
	int gettime();
	void dos();
	CString timeValue;
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	int timevalue;
	CString tv;
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton3();
};

class qizi{
public  :
	int hang;
	int lie;
	int top;
	int down;
	int left;
	int right;

	int yuantuzuobiao;
	
};

class bean{
public  :
	int i;
	int j;


	int value;
	
};

//int checkTop(qizi qz,byte chessnumarray[11][19],int vl,HWND qqgame);

//void checkDown(qizi q){
//				if(qz.x!=0){qz.top=1;}   //1 表示可以通行
//			if(qz.x!=10){qz.down=1;}
//			if(qz.y!=0){qz.left=1;}
//			if(qz.y!=18){qz.right=1}
//}
//
//void checkLeft(qizi q){
//				if(qz.x!=0){qz.top=1;}   //1 表示可以通行
//			if(qz.x!=10){qz.down=1;}
//			if(qz.y!=0){qz.left=1;}
//			if(qz.y!=18){qz.right=1}
//}
//
//void checkRight(qizi q){
//				if(qz.x!=0){qz.top=1;}   //1 表示可以通行
//			if(qz.x!=10){qz.down=1;}
//			if(qz.y!=0){qz.left=1;}
//			if(qz.y!=18){qz.right=1}
//}

