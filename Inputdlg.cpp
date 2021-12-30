// Inputdlg.cpp : implementation file
//

#include "stdafx.h"
#include "addressbook1.h"
#include "Inputdlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Inputdlg dialog


Inputdlg::Inputdlg(CWnd* pParent /*=NULL*/)
	: CDialog(Inputdlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(Inputdlg)
	m_name = _T("");
	m_num = _T("");
	m_major = _T("");
	m_email = _T("");
	m_phone = _T("");
	//}}AFX_DATA_INIT
}


void Inputdlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Inputdlg)
	DDX_Text(pDX, IDC_EDIT1, m_name);
	DDX_Text(pDX, IDC_EDIT2, m_num);
	DDX_Text(pDX, IDC_EDIT3, m_major);
	DDX_Text(pDX, IDC_EDIT4, m_email);
	DDX_Text(pDX, IDC_EDIT5, m_phone);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Inputdlg, CDialog)
	//{{AFX_MSG_MAP(Inputdlg)
	ON_WM_SHOWWINDOW()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Inputdlg message handlers

void Inputdlg::OnOK() 
{
	// TODO: Add extra validation here
		UpdateData(TRUE);
	GetDlgItem(IDC_EDIT1)->SetFocus();
	if(m_email.Find('@',0)<0)
	{
		MessageBox("Email不正确，请重新输入");
        GetDlgItem(IDC_EDIT4)->SetFocus();
	return;
	}
	CDialog::OnOK();
}

void Inputdlg::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	
	// TODO: Add your message handler code here
	GetDlgItem(IDC_EDIT1)->SetFocus();//new:设置edit焦点
}
