// wxFileTextDialog.cpp: implementation of the wxFileTextDialog class.
//
//////////////////////////////////////////////////////////////////////
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif

#include "defines.h"

#include "wxFileTextDialog.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

wxFileTextDialog::wxFileTextDialog(WizAppData* data):wxWizBaseDlg(data)
{
	wxString boxcontents;

    /* Put text in the box */
	if (m_data->fileinput.Length()==0)
		boxcontents=m_data->input;
	else
		boxcontents=m_data->fileinput;

//    boxcontents.Replace("\n","\r\n");
	wxTextCtrl* text=(wxTextCtrl*)FindWindowById(ID_FILETEXT,this);
    text->SetValue(boxcontents);
	text->Show();
	FindWindowById(ID_LARGETEXT,this)->Show();
	text->SetFocus();
}

wxFileTextDialog::~wxFileTextDialog()
{

}
