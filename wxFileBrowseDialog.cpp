// wxFileBrowseDialog.cpp: implementation of the wxFileBrowseDialog class.
//
//////////////////////////////////////////////////////////////////////
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif

#include "defines.h"

#include "wxFileBrowseDialog.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

wxFileBrowseDialog::wxFileBrowseDialog(WizAppData* data,bool BrowseForDir):wxWizBaseDlg(data)
{
        /* Show file edit box and browse button */
	m_BrowseForDir=BrowseForDir;
	wxTextCtrl* ctrl=(wxTextCtrl*)FindWindowById(ID_FILE,this);
	ctrl->Show();
	ctrl->SetValue(m_data->output);
	ctrl->SetFocus();
	FindWindowById(ID_BROWSE,this)->Show();
}

wxFileBrowseDialog::~wxFileBrowseDialog()
{

}

void wxFileBrowseDialog::OnBrowseButtonClick(wxCommandEvent& event)
{
	if (m_BrowseForDir)
	{
		wxDirDialog dlg(this);
		if (dlg.ShowModal()==wxID_OK)
		{
			m_data->output=dlg.GetPath();
			((wxTextCtrl*)FindWindowById(ID_FILE,this))->SetValue(m_data->output);
		}
	}
	else
	{
		m_data->input.Replace(wxString(m_data->listsep),"|");
		wxFileDialog dlg(this);
		dlg.SetStyle(wxOPEN);
		if (dlg.ShowModal()==wxID_OK)
		{
			m_data->output=dlg.GetFilename();
			((wxTextCtrl*)FindWindowById(ID_FILE,this))->SetValue(m_data->output);
		}
	}
}

void wxFileBrowseDialog::OnButtonPressed(int errlevel)
{
	m_data->output=((wxTextCtrl*)FindWindowById(ID_FILE,this))->GetValue();
	wxWizBaseDlg::OnButtonPressed(errlevel);
}

