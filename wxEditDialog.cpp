// wxEditDialog.cpp: implementation of the wxEditDialog class.
//
//////////////////////////////////////////////////////////////////////
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif

#include "defines.h"
#include "wxEditDialog.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

wxEditDialog::wxEditDialog(WizAppData* data,bool hasPassword):wxWizBaseDlg(data)
{
	if (hasPassword)
	{
		m_editw=(wxTextCtrl*)FindWindowById(ID_EDITHIDDEN,this);
	}
	else
	{
		m_editw=(wxTextCtrl*)FindWindowById(ID_EDIT,this);
	}
	m_editw->Show();
	m_editw->SetValue(m_data->output);
	m_editw->SetFocus();
}

wxEditDialog::~wxEditDialog()
{

}

void wxEditDialog::OnButtonPressed(int errlevel)
{
	m_data->output=m_editw->GetValue();
	wxWizBaseDlg::OnButtonPressed(errlevel);
}

