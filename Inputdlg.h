#if !defined(AFX_INPUTDLG_H__00102252_77DA_4DF0_AE40_D454E32155A2__INCLUDED_)
#define AFX_INPUTDLG_H__00102252_77DA_4DF0_AE40_D454E32155A2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Inputdlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Inputdlg dialog

class Inputdlg : public CDialog
{
// Construction
public:
	Inputdlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Inputdlg)
	enum { IDD = IDD_DIALOG1 };
	CString	m_name;
	CString	m_num;
	CString	m_major;
	CString	m_email;
	CString	m_phone;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Inputdlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Inputdlg)
	virtual void OnOK();
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INPUTDLG_H__00102252_77DA_4DF0_AE40_D454E32155A2__INCLUDED_)
