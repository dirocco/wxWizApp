// wxWizApp.h: interface for the wxWizApp class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WXWIZAPP_H__7365BFC2_079C_4748_88D3_B2E42069BAC6__INCLUDED_)
#define AFX_WXWIZAPP_H__7365BFC2_079C_4748_88D3_B2E42069BAC6__INCLUDED_

#include "WizAppData.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class wxWizApp : public wxApp  
{
public:
	wxWizApp();
	virtual ~wxWizApp();
    virtual bool OnInit();
	virtual int OnExit();
	virtual int MainLoop();

protected:
	bool Usage();
	wxString CreateShellScript();
	wxString CreateShScript();
	wxString CreateDosScript();
	WizAppData m_data;
};

#endif // !defined(AFX_WXWIZAPP_H__7365BFC2_079C_4748_88D3_B2E42069BAC6__INCLUDED_)
