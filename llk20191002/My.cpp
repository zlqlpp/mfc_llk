// My.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "llk20191002.h"
#include "My.h"


// My �Ի���

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


// My ��Ϣ�������


void My::OnBnClickedButton1()
{
	 


}
