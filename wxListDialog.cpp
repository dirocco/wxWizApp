// wxListDialog.cpp: implementation of the wxListDialog class.
//
//////////////////////////////////////////////////////////////////////
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif

#include "defines.h"

#include "wxListDialog.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

wxListDialog::wxListDialog(WizAppData* data,bool Multiple):wxWizBaseDlg(data)
{
	wxArrayString items;
	wxArrayString numinits;
	wxArrayString strinits;
	int nritems;
	int nrnuminits;
	int nrstrinits;
	wxStaticText* text=(wxStaticText*)FindWindowById(ID_TEXT,this);
	text->SetLabel(m_data->text);
	text->Show();

	m_Multiple=Multiple;
	if (m_Multiple)
		m_box=(wxListBox*)FindWindowById(ID_LISTMULTIPLE,this);
	else
		m_box=(wxListBox*)FindWindowById(ID_LISTSINGLE,this);

	if (m_data->fileinput.Length()==0)
	{
		if ((nritems = WizAppData::ExplodeList(m_data->input,m_data->listsep,items)) <=0)
			return;
	}
	else
	{
		if ((nritems = WizAppData::ExplodeList(m_data->fileinput,'\n',items)) <= 0)
			return;
	}
	nrnuminits=WizAppData::ExplodeList(m_data->outnum,m_data->listsep,numinits);
	nrstrinits=WizAppData::ExplodeList(m_data->output,m_data->listsep,strinits);
	
	int inited=0;

	for (int itemnr =0;itemnr<nritems;itemnr++)
	{
		m_box->Append(items[itemnr]);
		for (int initnr = 0;initnr<nrnuminits;initnr++)
		{
			long num=-1;
			if (numinits[initnr].Length())
				numinits[initnr].ToLong(&num);
			if (itemnr == num)
			{
				inited=1;
				m_box->SetSelection(itemnr);
			}
			for (int initnr=0;initnr<nrstrinits;initnr++)
			{
				if (strinits[initnr].Length())
				{
					if (items[itemnr].CompareTo(strinits[initnr],wxString::ignoreCase)==0)
					{
						inited=1;
						m_box->SetSelection(itemnr);
					}
				}
			}
		}
	}
	if (!m_Multiple && !inited)
		m_box->SetSelection(0);
	m_box->Show();
	m_box->SetFocus();
}

wxListDialog::~wxListDialog()
{

}

void wxListDialog::OnButtonPressed(int errlevel)
{
	wxString tmp;
	
	m_data->outnum="";
	m_data->output="";
	int num=m_box->GetCount();
	if (num==-1)
		num=0;
	for (int i=0;i<num;i++)
	{
		if (m_box->Selected(i))
		{
			m_data->output.Printf("%s%c%s",m_data->output.c_str(),m_data->listsep,m_box->GetStringSelection().c_str());
			m_data->outnum.Printf("%s%c%d",m_data->outnum.c_str(),m_data->listsep,i);
		}
	}
	wxWizBaseDlg::OnButtonPressed(errlevel);
}
