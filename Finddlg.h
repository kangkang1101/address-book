#if !defined(AFX_FINDDLG_H__3ED7D95E_527A_4555_AEB5_272A656ECA45__INCLUDED_)
#define AFX_FINDDLG_H__3ED7D95E_527A_4555_AEB5_272A656ECA45__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Finddlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Finddlg dialog

class Finddlg : public CDialog
{
// Construction
public:
	Finddlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Finddlg)
	CString	m_find;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Finddlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Finddlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FINDDLG_H__3ED7D95E_527A_4555_AEB5_272A656ECA45__INCLUDED_)
