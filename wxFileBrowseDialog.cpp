// wxFileBrowseDialog.cpp: implementation of the wxFileBrowseDialog class.
//
//////////////////////////////////////////////////////////////////////
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif

#include "defines.h"

#include "wxFileBrowseDialog.h"

#include "wx/generic/dirdlgg.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

wxFileBrowseDialog::wxFileBrowseDialog(WizAppData* data,bool BrowseForDir):wxWizBaseDlg(data)
{
        /* Show file edit box and browse button */
	m_BrowseForDir=BrowseForDir;
	wxStaticText* text=(wxStaticText*)FindWindowById(ID_TEXT,this);
	text->SetLabel(m_data->text);
	text->Show();
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
		// pass some initial dir to wxDirDialog
		wxString dirHome;
		wxGetHomeDir(&dirHome);

		m_data->input.Replace(wxString(m_data->listsep),"|");
		wxDirDialog dlg(this, wxDirSelectorPromptStr, _T(""), wxDD_DEFAULT_STYLE & ~wxDD_NEW_DIR_BUTTON);
		// wxGenericDirDialog dlg(this, wxDirSelectorPromptStr, _T(""));
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

