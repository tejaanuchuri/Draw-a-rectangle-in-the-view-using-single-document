
// Draw a rectangle in the viewView.h : interface of the CDrawarectangleintheviewView class
//

#pragma once


class CDrawarectangleintheviewView : public CView
{
protected: // create from serialization only
	CDrawarectangleintheviewView() noexcept;
	DECLARE_DYNCREATE(CDrawarectangleintheviewView)

// Attributes
public:
	CDrawarectangleintheviewDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CDrawarectangleintheviewView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Draw a rectangle in the viewView.cpp
inline CDrawarectangleintheviewDoc* CDrawarectangleintheviewView::GetDocument() const
   { return reinterpret_cast<CDrawarectangleintheviewDoc*>(m_pDocument); }
#endif

