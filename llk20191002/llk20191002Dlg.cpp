// llk20191002Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "llk20191002.h"
#include "llk20191002Dlg.h"
#include <vector>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cllk20191002Dlg �Ի���




Cllk20191002Dlg::Cllk20191002Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(Cllk20191002Dlg::IDD, pParent)
	, xx(0)
	, yy(0)
	, xxx(0)
	, yyy(0)
	, qipanshuju(_T(""))
	, timeValue(_T(""))
	, timevalue(0)
	, tv(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cllk20191002Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT4, xxx);
	DDX_Text(pDX, IDC_EDIT5, yyy);
	DDX_Text(pDX, IDC_EDIT1, qipanshuju);


	DDX_Text(pDX, IDC_EDIT7, tv);
}

BEGIN_MESSAGE_MAP(Cllk20191002Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, &Cllk20191002Dlg::ClickStartButton)
	ON_BN_CLICKED(IDC_BUTTON2, &Cllk20191002Dlg::OnBnClickedButton2)

	ON_BN_CLICKED(IDC_BUTTON4, &Cllk20191002Dlg::OnBnClickedButton4)

	ON_BN_CLICKED(IDC_BUTTON5, &Cllk20191002Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &Cllk20191002Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &Cllk20191002Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON3, &Cllk20191002Dlg::OnBnClickedButton3)
END_MESSAGE_MAP()




// Cllk20191002Dlg ��Ϣ�������

BOOL Cllk20191002Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void Cllk20191002Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR Cllk20191002Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

int check(qizi qz, byte chessnumarray[11][19], int vl, HWND qqgame) {
	int x = 22;  //����
	int y = 193; //����

	if (qz.hang != 0) { qz.top = 1; }   //1 ��ʾ����ͨ��
	if (qz.hang != 10) { qz.down = 1; }
	if (qz.lie != 0) { qz.left = 1; }
	if (qz.lie != 18) { qz.right = 1; }

	if (qz.top == 1) {
		qizi qzt;
		qzt.hang = qz.hang - 1;
		qzt.lie = qz.lie;
		qzt.yuantuzuobiao = qz.yuantuzuobiao;
		if (check(qzt, chessnumarray, vl, qqgame) == 1) { return 1; }
	}
	else {
		if (chessnumarray[qz.hang - 1][qz.lie] == vl) {
			int lparam = ((y + 35 * (qz.hang - 1)) << 16) + x + 31 * qz.lie;
			::SendMessage(qqgame, WM_LBUTTONDOWN, 0, lparam);
			::SendMessage(qqgame, WM_LBUTTONUP, 0, lparam);

			::SendMessage(qqgame, WM_LBUTTONDOWN, 0, qz.yuantuzuobiao);
			::SendMessage(qqgame, WM_LBUTTONUP, 0, qz.yuantuzuobiao);



			return 1;
		}
	}

	/*if(qz.down==1){
		qizi qzt;
		qzt.hang=qz.hang+1;
		qzt.lie=qz.lie;
		qzt.yuantuzuobiao=qz.yuantuzuobiao;
		if(check(qzt,chessnumarray,vl,qqgame)==1){ return 1;}
	}else{
		if(chessnumarray[qz.hang+1][qz.lie]==vl){
		int lparam = ((y+35*(qz.hang+1))<<16)+x+31*qz.lie;
		::SendMessage(qqgame,WM_LBUTTONDOWN,0,lparam);
		::SendMessage(qqgame,WM_LBUTTONUP,0,lparam);

		::SendMessage(qqgame,WM_LBUTTONDOWN,0,qz.yuantuzuobiao);
		::SendMessage(qqgame,WM_LBUTTONUP,0,qz.yuantuzuobiao);



		return 1;
		}
	}

	if(qz.left==1){
		qizi qzt;
		qzt.hang=qz.hang;
		qzt.lie=qz.lie-1;
		qzt.yuantuzuobiao=qz.yuantuzuobiao;
		if(check(qzt,chessnumarray,vl,qqgame)==1){ return 1;}
	}else{
		if(chessnumarray[qz.hang][qz.lie-1]==vl){
		int lparam = ((y+35*(qz.hang))<<16)+x+31*(qz.lie-1);
		::SendMessage(qqgame,WM_LBUTTONDOWN,0,lparam);
		::SendMessage(qqgame,WM_LBUTTONUP,0,lparam);

		::SendMessage(qqgame,WM_LBUTTONDOWN,0,qz.yuantuzuobiao);
		::SendMessage(qqgame,WM_LBUTTONUP,0,qz.yuantuzuobiao);



		return 1;
		}
	}

	if(qz.right==1){
		qizi qzt;
		qzt.hang=qz.hang;
		qzt.lie=qz.lie-1;
		qzt.yuantuzuobiao=qz.yuantuzuobiao;
		if(check(qzt,chessnumarray,vl,qqgame)==1){ return 1;}
	}else{
		if(chessnumarray[qz.hang][qz.lie+1]==vl){
		int lparam = ((y+35*(qz.hang))<<16)+x+31*(qz.lie+1);
		::SendMessage(qqgame,WM_LBUTTONDOWN,0,lparam);
		::SendMessage(qqgame,WM_LBUTTONUP,0,lparam);

		::SendMessage(qqgame,WM_LBUTTONDOWN,0,qz.yuantuzuobiao);
		::SendMessage(qqgame,WM_LBUTTONUP,0,qz.yuantuzuobiao);



		return 1;
		}
	}*/

	return 0;
}
HWND game;  //��Ϸ���ھ��
RECT  r1;
POINT p;




void Cllk20191002Dlg::OnBnClickedButton2() // ��ȡ�������� �� ��ʾ��
{

	byte chessnumarray[11][19];
	game = ::FindWindow(NULL, "QQ��Ϸ - ��������ɫ��");
	DWORD processID;
	::GetWindowThreadProcessId(game, &processID);
	HANDLE threadH = ::OpenProcess(PROCESS_ALL_ACCESS, false, processID);
	//00171618
	DWORD byread;
	LPCVOID  pbase = (LPCVOID)0x00199F5C;  //qipan���ݵĻ�ַ��
	LPVOID nbuffer = (LPVOID)&chessnumarray;  //���qipan������
	::ReadProcessMemory(threadH, pbase, nbuffer, 11 * 19, &byread);

	//��ʾqipan ����
	char buf[16];
	this->qipanshuju = "";
	for (int y = 0; y < 11; y++) {

		for (int x = 0; x < 19; x++) {
			itoa(chessnumarray[y][x], buf, 16);  //ת�����ִ�
			this->qipanshuju += buf;
			this->qipanshuju += "--";
		}
		this->qipanshuju += " \r\n";
	}


	UpdateData(false);
}




byte chessnumarray[11][19];
void Cllk20191002Dlg::dos() {



	game = ::FindWindow(NULL, "QQ��Ϸ - ��������ɫ��");
	DWORD processID;
	::GetWindowThreadProcessId(game, &processID);
	HANDLE threadH = ::OpenProcess(PROCESS_ALL_ACCESS, false, processID);
	//00171618
	DWORD byread;
	LPCVOID  pbase = (LPCVOID)0x00199F5C;  //qipan���ݵĻ�ַ��
	LPVOID nbuffer = (LPVOID)&chessnumarray;  //���qipan������
	::ReadProcessMemory(threadH, pbase, nbuffer, 11 * 19, &byread);

	//��ʾqipan ����
	char buf[16];
	this->qipanshuju = "";
	for (int y = 0; y < 11; y++) {

		for (int x = 0; x < 19; x++) {
			itoa(chessnumarray[y][x], buf, 16);  //ת�����ִ�
			this->qipanshuju += buf;
			this->qipanshuju += "--";
		}
		this->qipanshuju += " \r\n";
	}


	UpdateData(false);

}
int bytesToInt(byte* bytes, int size = 4)
{
	int addr = bytes[0] & 0xFF;
	addr |= ((bytes[1] << 8) & 0xFF00);
	addr |= ((bytes[2] << 16) & 0xFF0000);
	addr |= ((bytes[3] << 24) & 0xFF000000);
	return addr;
}



//00186AA8
int intVar;
int Cllk20191002Dlg::gettime() {

	byte times[4];

	game = ::FindWindow(NULL, "QQ��Ϸ - ��������ɫ��");
	DWORD processID;
	::GetWindowThreadProcessId(game, &processID);
	HANDLE threadH = ::OpenProcess(PROCESS_ALL_ACCESS, false, processID);
	//00186AA8
	DWORD byread;
	LPCVOID  pbase = (LPCVOID)0x00186AA8;
	LPVOID nbuffer = (LPVOID)&times;
	::ReadProcessMemory(threadH, pbase, nbuffer, 4, &byread);

	memcpy(&intVar, times, sizeof(int));
	CString str;
	str.Format("%d", intVar);
	this->tv = str;
	UpdateData(false);



	return intVar;
}

void Cllk20191002Dlg::OnBnClickedButton4()
{

	this->dos();
	//--------------------------------------------------------------

	int x = 22;  //����         30
	int y = 250; //����         40
	//HWND qqgame = ::FindWindow(NULL, "QQ��Ϸ - ��������ɫ��");
	//int lparam = (y << 16) + x + 31 * 2;  //��һ�еڶ���
	//lparam = (y << 16) + x + 31 * 1;  //��һ�е�1��
	//lparam = ((y+35*2) << 16) + x + 31 * 1;  //��һ�е�1��

	//::SendMessage(game, WM_LBUTTONDOWN, 0, 0x00c80018);
	//::SendMessage(game, WM_LBUTTONUP, 0, 0x00c30015);


	::GetWindowRect(game, &r1);
	//::GetCursorPos(&p);
	//::SetCursorPos(20 + r1.left, 250 + r1.top);
	//Sleep(2000);
	//::SetCursorPos(60 + r1.left, 280 + r1.top);

	//mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	//mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);


	int flag = 0;


	while (flag == 0) {

		for (int i = 0; i < 11; i++) {

			for (int j = 0; j < 19; j++) {
				if (chessnumarray[i][j] == 0) {
					continue;
				}



				for (int ii = 0; ii < 11; ii++) {

					for (int jj = 0; jj < 19; jj++) {
						if (ii == i && jj == j) {
							continue;
						}
						this->dos();
						if (chessnumarray[i][j] == chessnumarray[ii][jj]) {
							if (chessnumarray[i][j] == 0) {
								continue;
							}
							::GetWindowRect(game, &r1);
							::GetCursorPos(&p);

							::SetCursorPos(20 + r1.left + j * 39, 250 + r1.top + i * 45);

							mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
							mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
							//Sleep(100);
							::SetCursorPos(20 + r1.left + jj * 39, 250 + r1.top + ii * 45);

							mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
							mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
							Sleep(10);

							this->dos();
							if (chessnumarray[i][j] == 0x0) {
								//Sleep(1500);

							}
						}
					}
				}
			}


		}
		if (gettime() < 650) {
			Sleep(500);
			::SetCursorPos(r1.left, 300 + r1.top);
			return;
		}

		dos();


		flag = 1;
		for (int i = 0; i < 11; i++) {
			for (int j = 0; j < 19; j++) {
				if (chessnumarray[i][j] != 0) {
					flag = 0;
					continue;
				}
			}
		}
	}
}





void Cllk20191002Dlg::OnBnClickedButton5()
{
	gettime();
}


void Cllk20191002Dlg::OnBnClickedButton6()
{
	exit(-1);
}

void Cllk20191002Dlg::ClickStartButton() // �����ʼ��ť
{
	game = ::FindWindow(NULL, "QQ��Ϸ - ��������ɫ��"); //�ҵ����ھ��
	::GetWindowRect(game, &r1);

	this->xxx = r1.left;
	this->yyy = r1.right;
	UpdateData(false);
	::GetCursorPos(&p);
	::SetCursorPos(661 + 130 + r1.left, 569 + 130 + r1.top);

	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

	Sleep(500);
	::SetCursorPos(r1.left, 300 + r1.top);
}

void Cllk20191002Dlg::OnBnClickedButton7()    //����
{
	game = ::FindWindow(NULL, "QQ��Ϸ - ��������ɫ��"); //�ҵ����ھ��
	::GetWindowRect(game, &r1);

	this->xxx = r1.left;
	this->yyy = r1.right;
	UpdateData(false);
	::GetCursorPos(&p);
	::SetCursorPos(783 + 180 + r1.left, 13 + r1.top);

	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

	Sleep(500);
	::SetCursorPos(r1.left, 300 + r1.top);
}




void Cllk20191002Dlg::OnBnClickedButton3()   //�ҷ���
{
	game = ::FindWindow(NULL, "������"); //�ҵ����ھ��
	::GetWindowRect(game, &r1);


	::GetCursorPos(&p);
	::SetCursorPos(285 + 45 + r1.left, 155 + 45 + r1.top);

	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

	Sleep(500);
	::SetCursorPos(r1.left, 600 + r1.top);
}
