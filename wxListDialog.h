// wxListDialog.h: interface for the wxListDialog class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WXLISTDIALOG_H__90834051_7472_42CA_A7B8_146B1541F380__INCLUDED_)
#define AFX_WXLISTDIALOG_H__90834051_7472_42CA_A7B8_146B1541F380__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "wxWizBaseDlg.h"

class wxListDialog : public wxWizBaseDlg  
{
public:
	wxListDialog(WizAppData* data,bool Multiple);
	virtual ~wxListDialog();

protected:
	virtual void OnButtonPressed(int errlevel);
	bool m_Multiple;
	wxListBox* m_box;

};

#endif // !defined(AFX_WXLISTDIALOG_H__90834051_7472_42CA_A7B8_146B1541F380__INCLUDED_)
