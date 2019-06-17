#if !defined(AFX_RIGHTVIEW_H__3346E956_785E_4171_9C88_E89D43A6CC5B__INCLUDED_)
#define AFX_RIGHTVIEW_H__3346E956_785E_4171_9C88_E89D43A6CC5B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RightView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CRightView form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CRightView : public CFormView
{
protected:
	CRightView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CRightView)

// Form Data
public:
	//{{AFX_DATA(CRightView)
	enum { IDD = IDD_RIGHT_VIEW };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRightView)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CRightView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CRightView)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RIGHTVIEW_H__3346E956_785E_4171_9C88_E89D43A6CC5B__INCLUDED_)
