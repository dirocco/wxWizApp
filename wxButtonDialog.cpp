// wxButtonDialog.cpp: implementation of the wxButtonDialog class.
//
//////////////////////////////////////////////////////////////////////
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif

#include "defines.h"
#include "wxButtonDialog.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

wxButtonDialog::wxButtonDialog(WizAppData* data):wxWizBaseDlg(data)
{
	wxStaticText* text=(wxStaticText*)FindWindowById(ID_TEXT,this);
	text->SetLabel(m_data->text);
	text->Show();
}

wxButtonDialog::~wxButtonDialog()
{

}

void wxButtonDialog::LocalInitDialog()
{
	nritems=0;
	nrnuminits=0;
	nrstrinits=0;
	if (m_data->fileinput.Length()==0)
	{
		if ((nritems = WizAppData::ExplodeList(m_data->input,m_data->listsep,items)) <= 0)
			return;
	}
	else
		if ((nritems = WizAppData::ExplodeList(m_data->fileinput, '\n', items)) <= 0)
			return;
	if (nritems > NUM_BUTTONS)
		nritems = NUM_BUTTONS;

		nrnuminits = WizAppData::ExplodeList(m_data->outnum, m_data->listsep, numinits);
        nrstrinits = WizAppData::ExplodeList(m_data->output, m_data->listsep, strinits);
		int itemnr;
        for (itemnr = 0; itemnr < nritems; itemnr++)
        {
			SetButtonValue(itemnr,items[itemnr]);
			ShowButton(itemnr);
			int initnr;
            for (initnr = 0; initnr < nrnuminits; initnr++)
            {
                long num = -1;
				if (numinits.Count())
					numinits[initnr].ToLong(&num);
                if (itemnr == num)
                {
					CheckButton(itemnr);
                }
            }
            for (initnr = 0; initnr < nrstrinits; initnr++)
            {
				if (items[itemnr].CompareTo(strinits[initnr],wxString::ignoreCase) == 0)
                {
					CheckButton(itemnr);
                }
            }
        }
		SetButtonFocus(0);
}

void wxButtonDialog::OnButtonPressed(int errlevel)
{

			m_data->outnum="";
			m_data->output="";
			wxString tdata="";
            for (int i = 0; i < NUM_BUTTONS; i++)
            {
				if (IsButtonChecked(i))
                {
					  tdata="";
					  wxWindow* button=GetWindow(i);
					  wxString text=button->GetLabel();
					  tdata.Printf("%c%s",m_data->listsep,text.c_str());
					  m_data->output+=tdata;
					  text="";
					  tdata="";
					  text.Printf("%c%d",m_data->listsep,i);
					  tdata.Printf("%s",text.c_str());
					  m_data->outnum+=tdata;
				}
           }  
	m_data->output=m_data->output.Right(m_data->output.Length()-1);
	m_data->outnum=m_data->outnum.Right(m_data->outnum.Length()-1);
	wxWizBaseDlg::OnButtonPressed(errlevel);
}
