// llk20191002Dlg.h : ͷ�ļ�
//

#pragma once


// Cllk20191002Dlg �Ի���
class Cllk20191002Dlg : public CDialog
{
// ����
public:
	Cllk20191002Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_LLK20191002_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
//				if(qz.x!=0){qz.top=1;}   //1 ��ʾ����ͨ��
//			if(qz.x!=10){qz.down=1;}
//			if(qz.y!=0){qz.left=1;}
//			if(qz.y!=18){qz.right=1}
//}
//
//void checkLeft(qizi q){
//				if(qz.x!=0){qz.top=1;}   //1 ��ʾ����ͨ��
//			if(qz.x!=10){qz.down=1;}
//			if(qz.y!=0){qz.left=1;}
//			if(qz.y!=18){qz.right=1}
//}
//
//void checkRight(qizi q){
//				if(qz.x!=0){qz.top=1;}   //1 ��ʾ����ͨ��
//			if(qz.x!=10){qz.down=1;}
//			if(qz.y!=0){qz.left=1;}
//			if(qz.y!=18){qz.right=1}
//}

