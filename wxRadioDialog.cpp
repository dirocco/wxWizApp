// wxRadioDialog.cpp: implementation of the wxRadioDialog class.
//
//////////////////////////////////////////////////////////////////////
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif

#include "defines.h"

#include "wxRadioDialog.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

wxRadioDialog::wxRadioDialog(WizAppData* data):wxButtonDialog(data)
{
	if (m_data->output.Length()==0)
		m_data->output="0";
	LocalInitDialog();
}

wxRadioDialog::~wxRadioDialog()
{

}

void wxRadioDialog::CheckButton(int index,bool Checked)
{
	int buttonID=ID_RADIO1+index;
	wxRadioButton* btn=(wxRadioButton*)FindWindowById(buttonID,this);
	btn->SetValue(Checked);
}

void wxRadioDialog::SetButtonValue(int index,wxString& data)
{
	int buttonID=ID_RADIO1+index;
	wxRadioButton* btn=(wxRadioButton*)FindWindowById(buttonID,this);
	btn->SetLabel(data);
}

void wxRadioDialog::ShowButton(int index,bool bCmdShow)
{
	int buttonID=ID_RADIO1+index;
	wxWindow* win=FindWindowById(buttonID,this);
	if (bCmdShow)
		win->Show();
	else
		win->Hide();
}

bool wxRadioDialog::IsButtonChecked(int index)
{
	int buttonID=ID_RADIO1+index;
	wxRadioButton* btn=(wxRadioButton*)FindWindowById(buttonID,this);
	return btn->GetValue();
}

wxWindow* wxRadioDialog::GetWindow(int index)
{
	int buttonID=ID_RADIO1+index;
	return FindWindowById(buttonID,this);
}

void wxRadioDialog::SetButtonFocus(int index)
{
	int buttonID=ID_RADIO1+index;
	wxWindow* win=FindWindowById(buttonID,this);
	win->SetFocus();
}

