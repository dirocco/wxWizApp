// wxCheckDialog.cpp: implementation of the wxCheckDialog class.
//
//////////////////////////////////////////////////////////////////////
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif

#include "defines.h"

#include "wxCheckDialog.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

wxCheckDialog::wxCheckDialog(WizAppData* data):wxButtonDialog(data)
{
	if (m_data->output.Length()==0)
		m_data->output="0";
	LocalInitDialog();

	//	Show();
}

wxCheckDialog::~wxCheckDialog()
{

}

void wxCheckDialog::CheckButton(int index,bool Checked)
{
	int buttonID=ID_CHECK1+index;
	wxCheckBox* btn=(wxCheckBox*)FindWindowById(buttonID,this);
	btn->SetValue(Checked);
}

void wxCheckDialog::SetButtonValue(int index,wxString& data)
{
	int buttonID=ID_CHECK1+index;
	wxCheckBox* btn=(wxCheckBox*)FindWindowById(buttonID,this);
	btn->SetLabel(data);
}

void wxCheckDialog::ShowButton(int index,bool bCmdShow)
{
	int buttonID=ID_CHECK1+index;
	wxWindow* win=FindWindowById(buttonID,this);
	win->Hide();
	if (bCmdShow)
		win->Show();
	else
		win->Hide();
	
}

bool wxCheckDialog::IsButtonChecked(int index)
{
	int buttonID=ID_CHECK1+index;
	wxCheckBox* btn=(wxCheckBox*)FindWindowById(buttonID,this);
	return btn->IsChecked();
}

wxWindow* wxCheckDialog::GetWindow(int index)
{
	int buttonID=ID_CHECK1+index;
	return FindWindowById(buttonID,this);
}

void wxCheckDialog::SetButtonFocus(int index)
{
	int buttonID=ID_CHECK1+index;
	wxWindow* win=FindWindowById(buttonID,this);
	win->SetFocus();
}

