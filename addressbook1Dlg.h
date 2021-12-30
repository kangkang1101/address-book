// addressbook1Dlg.h : header file
//

#if !defined(AFX_ADDRESSBOOK1DLG_H__88D9A09F_734B_4AFC_BD33_BCC9A2050C8B__INCLUDED_)
#define AFX_ADDRESSBOOK1DLG_H__88D9A09F_734B_4AFC_BD33_BCC9A2050C8B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CAddressbook1Dlg dialog

class CAddressbook1Dlg : public CDialog
{
// Construction
public:
	CAddressbook1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CAddressbook1Dlg)
	enum { IDD = IDD_ADDRESSBOOK1_DIALOG };
	CListCtrl	m_list;
	CString	m_list3;
	CString	m_findname;
	CString	m_findnum;
	CString	m_findmajor;
	CString	m_findemail;
	CString	m_findphone;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAddressbook1Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CAddressbook1Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonInsert();
	afx_msg void OnButtonDelete();
	afx_msg void OnButtonModify();
	afx_msg void OnButtonSave();
	afx_msg void OnButtonLoad();
	afx_msg void OnButtonQuit();
	afx_msg void OnButtonFind();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDRESSBOOK1DLG_H__88D9A09F_734B_4AFC_BD33_BCC9A2050C8B__INCLUDED_)
