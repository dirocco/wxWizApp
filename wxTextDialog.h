// wxTextDialog.h: interface for the wxTextDialog class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WXTEXTDIALOG_H__0354B941_76EA_4585_98D5_481115B2AC88__INCLUDED_)
#define AFX_WXTEXTDIALOG_H__0354B941_76EA_4585_98D5_481115B2AC88__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "wxWizBaseDlg.h"

class wxTextDialog : public wxWizBaseDlg  
{
public:
	wxTextDialog(WizAppData* data);
	virtual ~wxTextDialog();
protected:
};

#endif // !defined(AFX_WXTEXTDIALOG_H__0354B941_76EA_4585_98D5_481115B2AC88__INCLUDED_)
