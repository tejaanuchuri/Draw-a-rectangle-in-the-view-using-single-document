
// Draw a rectangle in the view.h : main header file for the Draw a rectangle in the view application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CDrawarectangleintheviewApp:
// See Draw a rectangle in the view.cpp for the implementation of this class
//

class CDrawarectangleintheviewApp : public CWinAppEx
{
public:
	CDrawarectangleintheviewApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDrawarectangleintheviewApp theApp;
