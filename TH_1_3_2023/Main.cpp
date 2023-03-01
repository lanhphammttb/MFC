#include <afxwin.h>
#include "Main.h"
#include "dialog1.h"
CMyApp myApp;

BOOL CMyApp::InitInstance()
{
	dialog1 myDlg;
	m_pMainWnd = &myDlg;
	myDlg.DoModal();
	return TRUE;
}
CMainWindow::CMainWindow()
{
	Create(NULL, _T("Xin chao 64PM"));
}