// wxTextDialog.cpp: implementation of the wxTextDialog class.
//
//////////////////////////////////////////////////////////////////////
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif

#include "wxTextDialog.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

wxTextDialog::wxTextDialog(WizAppData* data):wxWizBaseDlg(data)
{
	FindWindowById(ID_TEXT,this)->Hide();
	wxStaticText* text=(wxStaticText*)FindWindowById(ID_LARGETEXT,this);
	text->SetLabel(m_data->text);
	text->Show();
}

wxTextDialog::~wxTextDialog()
{

}

