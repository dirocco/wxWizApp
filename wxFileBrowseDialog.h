// wxFileBrowseDialog.h: interface for the wxFileBrowseDialog class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WXFILEBROWSEDIALOG_H__39EC0656_CB7C_4C05_98FE_FA96E9393159__INCLUDED_)
#define AFX_WXFILEBROWSEDIALOG_H__39EC0656_CB7C_4C05_98FE_FA96E9393159__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "wxWizBaseDlg.h"

class wxFileBrowseDialog : public wxWizBaseDlg  
{
public:
	wxFileBrowseDialog(WizAppData* data,bool BrowseForDir);
	virtual ~wxFileBrowseDialog();
protected:
	bool m_BrowseForDir;
	virtual void OnBrowseButtonClick(wxCommandEvent& event);
	virtual void OnButtonPressed(int errlevel);
};

#endif // !defined(AFX_WXFILEBROWSEDIALOG_H__39EC0656_CB7C_4C05_98FE_FA96E9393159__INCLUDED_)
