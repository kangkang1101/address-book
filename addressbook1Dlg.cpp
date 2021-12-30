// addressbook1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "addressbook1.h"
#include "addressbook1Dlg.h"
#include "Finddlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
#include"Inputdlg.h"
#include"fstream.h"
/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAddressbook1Dlg dialog

CAddressbook1Dlg::CAddressbook1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAddressbook1Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAddressbook1Dlg)
	m_list3 = _T("");
	m_findname = _T("");
	m_findnum = _T("");
	m_findmajor = _T("");
	m_findemail = _T("");
	m_findphone = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CAddressbook1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAddressbook1Dlg)
	DDX_Control(pDX, IDC_LIST1, m_list);
	DDX_Text(pDX, IDC_EDIT1, m_findname);
	DDX_Text(pDX, IDC_EDIT2, m_findnum);
	DDX_Text(pDX, IDC_EDIT3, m_findmajor);
	DDX_Text(pDX, IDC_EDIT4, m_findemail);
	DDX_Text(pDX, IDC_EDIT5, m_findphone);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAddressbook1Dlg, CDialog)
	//{{AFX_MSG_MAP(CAddressbook1Dlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButtonInsert)
	ON_BN_CLICKED(IDC_BUTTON2, OnButtonDelete)
	ON_BN_CLICKED(IDC_BUTTON3, OnButtonModify)
	ON_BN_CLICKED(IDC_BUTTON4, OnButtonSave)
	ON_BN_CLICKED(IDC_BUTTON5, OnButtonLoad)
	ON_BN_CLICKED(IDC_BUTTON6, OnButtonQuit)
	ON_BN_CLICKED(IDC_BUTTON7, OnButtonFind)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAddressbook1Dlg message handlers

BOOL CAddressbook1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
    m_list.ModifyStyle(0,LVS_REPORT);
	m_list.InsertColumn(0,"学号",LVCFMT_CENTER,100,NULL);
	m_list.InsertColumn(1,"姓名",LVCFMT_CENTER,70,NULL);
	m_list.InsertColumn(2,"专业",LVCFMT_CENTER,150,NULL);
	m_list.InsertColumn(3,"邮箱",LVCFMT_CENTER,150,NULL);
	m_list.InsertColumn(4,"电话",LVCFMT_CENTER,150,NULL);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CAddressbook1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CAddressbook1Dlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CAddressbook1Dlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CAddressbook1Dlg::OnButtonInsert() 
{
	// TODO: Add your control notification handler code here

		Inputdlg dlg;
	if(IDOK==dlg.DoModal())
	{
		m_list.InsertItem(0,dlg.m_num);
		m_list.SetItemText(0,1,dlg.m_name);
		m_list.SetItemText(0,2,dlg.m_major);
		m_list.SetItemText(0,3,dlg.m_email);
		m_list.SetItemText(0,4,dlg.m_phone);
	}
}

void CAddressbook1Dlg::OnButtonDelete() 
{
	// TODO: Add your control notification handler code here
		if(!m_list.GetItemCount())
	{
		MessageBox("没有记录可以删除","Error",MB_ICONERROR | MB_OKCANCEL);
		return;
		}
		int index=0;
		index=m_list.GetNextItem(0,LVNI_SELECTED);
		if(-1==index)
		{
			if(IDOK==MessageBox("确认删除？","Information",MB_OKCANCEL))
			{
				m_list.DeleteItem(0);
		}
		}
		else
		{
			if(IDOK==MessageBox("确认删除？","Information",MB_OKCANCEL))
			{
				m_list.DeleteItem(index);
			}
		}
}


void CAddressbook1Dlg::OnButtonModify() 
{
	// TODO: Add your control notification handler code here
		if(!m_list.GetItemCount())
	{
		MessageBox("没有记录可以修改");
		return;
	}
	Inputdlg dlg;
	dlg.m_name=m_list.GetItemText(0,0);
	dlg.m_num=m_list.GetItemText(0,1);
	dlg.m_major=m_list.GetItemText(0,2);
	dlg.m_email=m_list.GetItemText(0,3);
	dlg.m_phone=m_list.GetItemText(0,4);
	int index=0;
	index=m_list.GetNextItem(0,LVNI_SELECTED);
	if(-1==index)
	{
      dlg.m_name=m_list.GetItemText(0,0);
	  dlg.m_num=m_list.GetItemText(0,1);
	  dlg.m_major=m_list.GetItemText(0,2);
	  dlg.m_email=m_list.GetItemText(0,3);
      dlg.m_phone=m_list.GetItemText(0,4);
	  if(dlg.DoModal())
	  {
		  m_list.SetItemText(0,0,dlg.m_name);
		  m_list.SetItemText(0,1,dlg.m_num);
		  m_list.SetItemText(0,2,dlg.m_major);
		  m_list.SetItemText(0,3,dlg.m_email);
		  m_list.SetItemText(0,4,dlg.m_phone);
	  }
	}
	else
	{
		dlg.m_name=m_list.GetItemText(index,0);
		dlg.m_num=m_list.GetItemText(index,1);
		dlg.m_major=m_list.GetItemText(index,2);
		dlg.m_email=m_list.GetItemText(index,3);
		dlg.m_phone=m_list.GetItemText(index,4);
	if(dlg.DoModal())
	{
		m_list.SetItemText(index,0,dlg.m_name);
		m_list.SetItemText(index,1,dlg.m_num);
        m_list.SetItemText(index,2,dlg.m_major);
        m_list.SetItemText(index,3,dlg.m_email);
        m_list.SetItemText(index,4,dlg.m_phone);
}
	}
}

void CAddressbook1Dlg::OnButtonFind() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	Inputdlg dlg;
	int flag=0;
	CString str,str1;
	GetDlgItemText(IDC_EDIT1, str);
    int Count=m_list.GetItemCount();

	for (int i = Count -1 ; i >= 0; i--)
	{
		str1=m_list.GetItemText(i,1);
		if(str==str1)
		{
	m_findnum=m_list.GetItemText(i,0);
	UpdateData(FALSE);
	m_findmajor=m_list.GetItemText(i,2);
	UpdateData(FALSE);
	m_findemail=m_list.GetItemText(i,3);
	UpdateData(FALSE);
	m_findphone=m_list.GetItemText(i,4);
	UpdateData(FALSE);

	flag=1;
		}
	}

	if(flag==0)
	{
		MessageBox("未找到匹配项");
		return;
	}
	
}
void CAddressbook1Dlg::OnButtonSave() 
{
	// TODO: Add your control notification handler code here
		CString str;
	fstream outfile("book.txt",ios::out);
	int Count=m_list.GetItemCount();
	for(int i=Count-1;i>=0;i--)
	{
		for(int j=0;j<5;j++)
		{
			str=m_list.GetItemText(i,j);
			str+=' ';
			outfile<<str;
		}
		outfile<<endl;
	}
	outfile.close();
}

void CAddressbook1Dlg::OnButtonLoad() 
{
	// TODO: Add your control notification handler code here
	BOOL end=FALSE;
	char p[100];
	int row=0,column=0;
	fstream infile("book.txt",ios::in|ios::nocreate);
	if(!infile)
	{
		MessageBox("您还没有保存过信息！");
		return;
	}
	while(1)
	{
		m_list.InsertItem(m_list.GetItemCount(),NULL,NULL);
		for(column=0;column<5;column++)
		{
			if(!(infile>>p))
			{
				end=TRUE;
				break;
			}
			m_list.SetItemText(row,column,p);
		}
		row++;
		if(TRUE==end)
		{
			break;
		}
	}
	infile.close();
}

void CAddressbook1Dlg::OnButtonQuit() 
{
	// TODO: Add your control notification handler code here
	AfxGetMainWnd()->SendMessage(WM_CLOSE);

}


