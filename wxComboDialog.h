// wxComboDialog.h: interface for the wxComboDialog class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WXCOMBODIALOG_H__53C0CB00_F853_4FA3_941C_7648D3874E5A__INCLUDED_)
#define AFX_WXCOMBODIALOG_H__53C0CB00_F853_4FA3_941C_7648D3874E5A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "wxWizBaseDlg.h"

class wxComboDialog : public wxWizBaseDlg  
{
public:
	wxComboDialog(WizAppData* data);
	virtual ~wxComboDialog();
protected:
	virtual void OnButtonPressed(int errlevel);
};

#endif // !defined(AFX_WXCOMBODIALOG_H__53C0CB00_F853_4FA3_941C_7648D3874E5A__INCLUDED_)
