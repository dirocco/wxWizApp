// wxEditDialog.h: interface for the wxEditDialog class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WXEDITDIALOG_H__95A5A6BF_8A7C_453D_857F_DDE4F6236E5D__INCLUDED_)
#define AFX_WXEDITDIALOG_H__95A5A6BF_8A7C_453D_857F_DDE4F6236E5D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "wxWizBaseDlg.h"

class wxEditDialog : public wxWizBaseDlg  
{
public:
	wxEditDialog(WizAppData* data,bool hasPassword=false);
	virtual ~wxEditDialog();

protected:
	wxTextCtrl* m_editw;
	virtual void OnButtonPressed(int errlevel);
};

#endif // !defined(AFX_WXEDITDIALOG_H__95A5A6BF_8A7C_453D_857F_DDE4F6236E5D__INCLUDED_)
