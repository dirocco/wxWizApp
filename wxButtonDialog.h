// wxButtonDialog.h: interface for the wxButtonDialog class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WXBUTTONDIALOG_H__948E50EC_600C_445F_BA37_DAA83347BF90__INCLUDED_)
#define AFX_WXBUTTONDIALOG_H__948E50EC_600C_445F_BA37_DAA83347BF90__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "wxWizBaseDlg.h"

class wxButtonDialog : public wxWizBaseDlg  
{
public:
	wxButtonDialog(WizAppData* data);
	virtual ~wxButtonDialog();

protected:
	void LocalInitDialog();
	virtual void CheckButton(int index,bool Checked=TRUE)=0;
	virtual void SetButtonValue(int index,wxString& data)=0;
	virtual void ShowButton(int index,bool bCmdShow=TRUE)=0;
	virtual void SetButtonFocus(int index)=0;
	virtual bool IsButtonChecked(int index)=0;
	virtual wxWindow* GetWindow(int index)=0;
	virtual void OnButtonPressed(int errlevel);
	wxArrayString items;
	wxArrayString strinits;
	wxArrayString numinits;
	int nritems;
	int nrnuminits;
	int nrstrinits;
};

#endif // !defined(AFX_WXBUTTONDIALOG_H__948E50EC_600C_445F_BA37_DAA83347BF90__INCLUDED_)
