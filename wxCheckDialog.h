// wxCheckDialog.h: interface for the wxCheckDialog class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WXCHECKDIALOG_H__513B3C5E_02CD_47CD_B7AF_E8B955171E8C__INCLUDED_)
#define AFX_WXCHECKDIALOG_H__513B3C5E_02CD_47CD_B7AF_E8B955171E8C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "wxButtonDialog.h"

class wxCheckDialog : public wxButtonDialog  
{
public:
	wxCheckDialog(WizAppData* data);
	virtual ~wxCheckDialog();
protected:
	virtual void CheckButton(int index,bool Checked=TRUE);
	virtual void SetButtonValue(int index,wxString& data);
	virtual void ShowButton(int index,bool bCmdShow=TRUE);
	virtual bool IsButtonChecked(int index);
	virtual wxWindow* GetWindow(int index);
	virtual void SetButtonFocus(int index);

};

#endif // !defined(AFX_WXCHECKDIALOG_H__513B3C5E_02CD_47CD_B7AF_E8B955171E8C__INCLUDED_)
