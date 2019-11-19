// My.cpp : 实现文件
//

#include "stdafx.h"
#include "llk20191002.h"
#include "My.h"


// My 对话框

IMPLEMENT_DYNAMIC(My, CDialog)

My::My(CWnd* pParent /*=NULL*/)
	: CDialog(My::IDD, pParent)
{

}

My::~My()
{
}

void My::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(My, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &My::OnBnClickedButton1)
END_MESSAGE_MAP()


// My 消息处理程序


void My::OnBnClickedButton1()
{
	 


}
