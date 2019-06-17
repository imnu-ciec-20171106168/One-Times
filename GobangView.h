// GobangView.h : interface of the CGobangView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GOBANGVIEW_H__C5D23723_3F5D_4D0F_A156_6F95456A19E3__INCLUDED_)
#define AFX_GOBANGVIEW_H__C5D23723_3F5D_4D0F_A156_6F95456A19E3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGobangView : public CView
{
protected: // create from serialization only
	CGobangView();
	DECLARE_DYNCREATE(CGobangView)

// Attributes
public:
	CGobangDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGobangView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CGobangView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGobangView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in GobangView.cpp
inline CGobangDoc* CGobangView::GetDocument()
   { return (CGobangDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GOBANGVIEW_H__C5D23723_3F5D_4D0F_A156_6F95456A19E3__INCLUDED_)
