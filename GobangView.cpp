// GobangView.cpp : implementation of the CGobangView class
//

#include "stdafx.h"
#include "Gobang.h"

#include "GobangDoc.h"
#include "GobangView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGobangView

IMPLEMENT_DYNCREATE(CGobangView, CView)

BEGIN_MESSAGE_MAP(CGobangView, CView)
	//{{AFX_MSG_MAP(CGobangView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGobangView construction/destruction

CGobangView::CGobangView()
{
	// TODO: add construction code here

}

CGobangView::~CGobangView()
{
}

BOOL CGobangView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CGobangView drawing

void CGobangView::OnDraw(CDC* pDC)
{
	CGobangDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CGobangView printing

BOOL CGobangView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CGobangView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CGobangView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CGobangView diagnostics

#ifdef _DEBUG
void CGobangView::AssertValid() const
{
	CView::AssertValid();
}

void CGobangView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGobangDoc* CGobangView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGobangDoc)));
	return (CGobangDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGobangView message handlers
