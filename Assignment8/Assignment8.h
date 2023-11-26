// Assignment8.h : main header file for the Assignment8 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include <Windows.h>
#include<arxHeaders.h>
#include <dbents.h>

// CAssignment8App
// See Assignment8.cpp for the implementation of this class
//

class CAssignment8App : public CWinApp
{
public:
	CAssignment8App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
