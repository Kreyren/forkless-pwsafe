#pragma once

// OptionsPasswordPolicy.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// COptionsPasswordPolicy dialog

class COptionsPasswordPolicy : public CPropertyPage
{
	DECLARE_DYNCREATE(COptionsPasswordPolicy)

// Construction
public:
	COptionsPasswordPolicy();
	~COptionsPasswordPolicy();

// Dialog Data
	//{{AFX_DATA(COptionsPasswordPolicy)
	enum { IDD = IDD_PS_PASSWORDPOLICY };
	UINT	m_pwlendefault;
	BOOL	m_pwuselowercase;
	BOOL	m_pwuseuppercase;
	BOOL	m_pwusedigits;
	BOOL	m_pwusesymbols;
	BOOL	m_pweasyvision;
	BOOL	m_pwusehexdigits;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(COptionsPasswordPolicy)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(COptionsPasswordPolicy)
	virtual BOOL OnInitDialog();
	afx_msg void OnUsehexdigits();
	afx_msg BOOL OnKillActive();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	BOOL	m_savepwuselowercase;
	BOOL	m_savepwuseuppercase;
	BOOL	m_savepwusedigits;
	BOOL	m_savepwusesymbols;
	BOOL	m_savepweasyvision;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.
