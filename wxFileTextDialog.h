// wxFileTextDialog.h: interface for the wxFileTextDialog class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WXFILETEXTDIALOG_H__4FEDDE32_FFDA_4494_B491_0734BA61CE87__INCLUDED_)
#define AFX_WXFILETEXTDIALOG_H__4FEDDE32_FFDA_4494_B491_0734BA61CE87__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "wxWizBaseDlg.h"

class wxFileTextDialog : public wxWizBaseDlg  
{
public:
	wxFileTextDialog(WizAppData* data);
	virtual ~wxFileTextDialog();

};

#endif // !defined(AFX_WXFILETEXTDIALOG_H__4FEDDE32_FFDA_4494_B491_0734BA61CE87__INCLUDED_)
