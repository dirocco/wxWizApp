// wxWizBaseDlg.cpp: implementation of the wxWizBaseDlg class.
//
//////////////////////////////////////////////////////////////////////
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif

#include "wx/statline.h"

#include "resource.h"

#include "wxWizBaseDlg.h"

BEGIN_EVENT_TABLE(wxWizBaseDlg,wxDialog)
	EVT_BUTTON(ID_NEXT,wxWizBaseDlg::OnNextButtonClick)
	EVT_BUTTON(ID_BACK,wxWizBaseDlg::OnBackButtonClick)
	EVT_BUTTON(ID_CANCEL,wxWizBaseDlg::OnCancelButtonClick)
	EVT_BUTTON(ID_BROWSE,wxWizBaseDlg::OnBrowseButtonClick)
END_EVENT_TABLE()

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

wxWizBaseDlg::wxWizBaseDlg(WizAppData* data):
	wxDialog(NULL,-1,wxString("Dialog"),wxDefaultPosition,wxDefaultSize,wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP)
{

	m_data=data;
	wxFont fnt(8,wxDEFAULT,wxNORMAL,wxNORMAL,FALSE);
	SetFont(fnt);
	wxWindow* win;
	SetIcon(m_data->icon);
	SetSize(-1,-1,470,390);
	SetTitle(m_data->title);
	CentreOnScreen();
	wxButton* btn;
	if (m_data->opt_finish)
		btn=new wxButton(this,ID_NEXT,m_data->labelfinish,wxPoint(280,325),wxSize(75,25));
	else
		btn=new wxButton(this,ID_NEXT,m_data->labelnext,wxPoint(280,325),wxSize(75,25));
	btn->SetDefault();
	new wxButton(this,ID_CANCEL,m_data->labelcancel,wxPoint(375,325),wxSize(75,25));
	win=new wxButton(this,ID_BACK,m_data->labelback,wxPoint(193,325),wxSize(75,25));
	if (m_data->opt_noback)
		win->Hide();
	new wxStaticLine(this,ID_STATIC,wxPoint(7,314),wxSize(442,1));
	new wxStaticBitmap(this,ID_BITMAP,m_data->bitmap,wxPoint(7,7),wxSize(m_data->bitmap.GetWidth(),m_data->bitmap.GetHeight()),wxSUNKEN_BORDER);
	win=new wxTextCtrl(this,ID_EDIT,"",wxPoint(178,130),wxSize(273,23));
	win->Hide();
	win=new wxRadioButton(this,ID_RADIO1,"Radio1",wxPoint(178,130),wxSize(273,15),wxRB_GROUP);
	win->Hide();
	win=new wxRadioButton(this,ID_RADIO2,"Radio2",wxPoint(178,148),wxSize(273,15));
	win->Hide();
	win=new wxRadioButton(this,ID_RADIO3,"Radio3",wxPoint(178,166),wxSize(273,15));
	win->Hide();
	win=new wxRadioButton(this,ID_RADIO4,"Radio4",wxPoint(178,184),wxSize(273,15));
	win->Hide();
	win=new wxRadioButton(this,ID_RADIO5,"Radio5",wxPoint(178,202),wxSize(273,15));
	win->Hide();
	win=new wxRadioButton(this,ID_RADIO6,"Radio6",wxPoint(178,220),wxSize(273,15));
	win->Hide();
	win=new wxRadioButton(this,ID_RADIO7,"Radio7",wxPoint(178,238),wxSize(273,15));
	win->Hide();
	win=new wxRadioButton(this,ID_RADIO8,"Radio8",wxPoint(178,256),wxSize(273,15));
	win->Hide();
	win=new wxRadioButton(this,ID_RADIO9,"Radio9",wxPoint(178,274),wxSize(273,15));
	win->Hide();
	win=new wxRadioButton(this,ID_RADIO10,"radio10",wxPoint(178,292),wxSize(273,15));
	win->Hide();
	win=new wxStaticText(this,ID_TEXT,"",wxPoint(178,7),wxSize(273,120),wxST_NO_AUTORESIZE);
	win=new wxCheckBox(this,ID_CHECK1,"Check1",wxPoint(178,130),wxSize(273,15));
	win->Hide();
	win=new wxCheckBox(this,ID_CHECK2,"Check2",wxPoint(178,148),wxSize(273,15));
	win->Hide();
	win=new wxCheckBox(this,ID_CHECK3,"Check3",wxPoint(178,166),wxSize(273,15));
	win->Hide();
	win=new wxCheckBox(this,ID_CHECK4,"Check4",wxPoint(178,184),wxSize(273,15));
	win->Hide();
	win=new wxCheckBox(this,ID_CHECK5,"Check5",wxPoint(178,202),wxSize(273,15));
	win->Hide();
	win=new wxCheckBox(this,ID_CHECK6,"Check6",wxPoint(178,220),wxSize(273,15));
	win->Hide();
	win=new wxCheckBox(this,ID_CHECK7,"Check7",wxPoint(178,238),wxSize(273,15));
	win->Hide();
	win=new wxCheckBox(this,ID_CHECK8,"Check8",wxPoint(178,256),wxSize(273,15));
	win->Hide();
	win=new wxCheckBox(this,ID_CHECK9,"Check9",wxPoint(178,274),wxSize(273,15));
	win->Hide();
	win=new wxCheckBox(this,ID_CHECK10,"Check10",wxPoint(178,292),wxSize(273,15));
	win->Hide();
	win=new wxStaticText(this,ID_LARGETEXT,m_data->text,wxPoint(178,7),wxSize(273,305),wxST_NO_AUTORESIZE);
	win->Hide();
	win=new wxButton(this,ID_BROWSE,m_data->labelbrowse,wxPoint(375,130),wxSize(75,23));	
	win->Hide();
	win=new wxTextCtrl(this,ID_FILE,"",wxPoint(178,130),wxSize(195,23));
	win->Hide();
	win=new wxTextCtrl(this,ID_FILETEXT,"",wxPoint(178,130),wxSize(273,180),wxTE_MULTILINE|wxTE_READONLY);
	win->Hide();
	win=new wxComboBox(this,ID_COMBO,"",wxPoint(178,130),wxSize(273,180),0,NULL,wxCB_SIMPLE|wxCB_READONLY);
	win->Hide();
	win=new wxListBox(this,ID_LISTSINGLE,wxPoint(178,130),wxSize(273,180),0,NULL,wxLB_SINGLE);
	win->Hide();
	win=new wxListBox(this,ID_LISTMULTIPLE,wxPoint(178,130),wxSize(273,180),0,NULL,wxLB_EXTENDED);
	win->Hide();
	win=new wxStaticText(this,ID_VERSION,m_data->sig,wxPoint(7,335),wxSize(185,20),wxST_NO_AUTORESIZE);
	win=new wxTextCtrl(this,ID_EDITHIDDEN,"",wxPoint(178,130),wxSize(273,23),wxTE_PASSWORD);
	win->Hide();
	//deal with sound here
	Raise();
}

wxWizBaseDlg::~wxWizBaseDlg()
{

}


void wxWizBaseDlg::OnNextButtonClick(wxCommandEvent& event)
{
	OnButtonPressed(0);
}

void wxWizBaseDlg::OnBackButtonClick(wxCommandEvent& event)
{
	OnButtonPressed(1);
}

void wxWizBaseDlg::OnCancelButtonClick(wxCommandEvent& event)
{
	OnButtonPressed(2);
}

void wxWizBaseDlg::OnBrowseButtonClick(wxCommandEvent& event)
{
	//Default implementation does nothing
}

void wxWizBaseDlg::OnButtonPressed(int errlevel)
{
	EndModal(errlevel);
}

