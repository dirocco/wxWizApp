// wxRadioDialog.h: interface for the wxRadioDialog class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WXRADIODIALOG_H__4B2AF79A_1D97_45DF_8E65_654C5D08B7B0__INCLUDED_)
#define AFX_WXRADIODIALOG_H__4B2AF79A_1D97_45DF_8E65_654C5D08B7B0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "wxButtonDialog.h"

class wxRadioDialog : public wxButtonDialog  
{
public:
	wxRadioDialog(WizAppData* data);
	virtual ~wxRadioDialog();
protected:
	virtual void CheckButton(int index,bool Checked=TRUE);
	virtual void SetButtonValue(int index,wxString& data);
	virtual void ShowButton(int index,bool bCmdShow=TRUE);
	virtual bool IsButtonChecked(int index);
	virtual wxWindow* GetWindow(int index);
	virtual void SetButtonFocus(int index);
};

#endif // !defined(AFX_WXRADIODIALOG_H__4B2AF79A_1D97_45DF_8E65_654C5D08B7B0__INCLUDED_)
