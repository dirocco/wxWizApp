// wxComboDialog.cpp: implementation of the wxComboDialog class.
//
//////////////////////////////////////////////////////////////////////
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif
#include "defines.h"

#include "wxComboDialog.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

wxComboDialog::wxComboDialog(WizAppData* data):wxWizBaseDlg(data)
{
        wxArrayString items;
        int nritems;
		wxStaticText* text=(wxStaticText*)FindWindowById(ID_TEXT,this);
		text->SetLabel(m_data->text);
		text->Show();
        wxComboBox* box=(wxComboBox*)FindWindowById(ID_COMBO,this);
        /* First dissect the list */
        if (!m_data->fileinput.Length())
        {
            if ((nritems = WizAppData::ExplodeList(m_data->input, m_data->listsep, items)) == 0)
                return;
        }
        else
        {
            if ((nritems = WizAppData::ExplodeList(m_data->fileinput, '\n', items)) == 0)
                return; /* nothing to do */
        }
        for (int itemnr = 0; itemnr < nritems; itemnr++)
        {
            long num;
			box->Append(items[itemnr]);
			if (m_data->outnum.Length())
			{
				m_data->outnum.ToLong(&num);
                if (itemnr == num)
					box->SetSelection(itemnr);
            }
        }
        if (m_data->output.Length())
        {
			box->SetValue(m_data->output);
        }
		box->Show();
		box->SetFocus();
}

wxComboDialog::~wxComboDialog()
{

}

void wxComboDialog::OnButtonPressed(int errlevel)
{
	wxComboBox* box=(wxComboBox*)FindWindowById(ID_COMBO,this);
	/* Find the selected/typed item */
	int idx;
	m_data->output=box->GetValue();
	if ((idx=box->GetSelection())==-1)
		idx=box->GetCount();
	m_data->outnum.Printf("%d",idx);
	wxWizBaseDlg::OnButtonPressed(errlevel);
}

