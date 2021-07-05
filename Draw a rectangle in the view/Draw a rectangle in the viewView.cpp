
// Draw a rectangle in the viewView.cpp : implementation of the CDrawarectangleintheviewView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Draw a rectangle in the view.h"
#endif

#include "Draw a rectangle in the viewDoc.h"
#include "Draw a rectangle in the viewView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawarectangleintheviewView

IMPLEMENT_DYNCREATE(CDrawarectangleintheviewView, CView)

BEGIN_MESSAGE_MAP(CDrawarectangleintheviewView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CDrawarectangleintheviewView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CDrawarectangleintheviewView construction/destruction

CDrawarectangleintheviewView::CDrawarectangleintheviewView() noexcept
{
	// TODO: add construction code here

}

CDrawarectangleintheviewView::~CDrawarectangleintheviewView()
{
}

BOOL CDrawarectangleintheviewView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDrawarectangleintheviewView drawing

void CDrawarectangleintheviewView::OnDraw(CDC* pDC)
{	
	CBrush brushBlue(RGB(0, 0, 255));
	CBrush* pOldBrush = pDC->SelectObject(&brushBlue);
	CDrawarectangleintheviewDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDC->Rectangle(40,40, 350, 250);
	// TODO: add draw code for native data here
}


// CDrawarectangleintheviewView printing


void CDrawarectangleintheviewView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CDrawarectangleintheviewView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDrawarectangleintheviewView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDrawarectangleintheviewView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CDrawarectangleintheviewView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDrawarectangleintheviewView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CDrawarectangleintheviewView diagnostics

#ifdef _DEBUG
void CDrawarectangleintheviewView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawarectangleintheviewView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawarectangleintheviewDoc* CDrawarectangleintheviewView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawarectangleintheviewDoc)));
	return (CDrawarectangleintheviewDoc*)m_pDocument;
}
#endif //_DEBUG


// CDrawarectangleintheviewView message handlers
