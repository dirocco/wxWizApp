// wxWizApp.cpp: implementation of the wxWizApp class.
//
//////////////////////////////////////////////////////////////////////
// ----------------------------------------------------------------------------
// headers
// ----------------------------------------------------------------------------
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif

#include "wx/file.h"

#include "defines.h"
#include "wxWizApp.h"

#include "wxTextDialog.h"
#include "wxEditDialog.h"
#include "wxRadioDialog.h"
#include "wxCheckDialog.h"
#include "wxFileBrowseDialog.h"
#include "wxFileTextDialog.h"
#include "wxComboDialog.h"
#include "wxListDialog.h"

#include "resource.h"
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
IMPLEMENT_APP(wxWizApp)


wxWizApp::wxWizApp()
{

}

wxWizApp::~wxWizApp()
{

}

int wxWizApp::MainLoop()
{
	return m_data.errlevel;
}

bool wxWizApp::OnInit()
{
	if (argc==1)
		return Usage();
	wxString arg1=argv[1];
	if (arg1.CompareTo(CMD_MB,wxString::ignoreCase)==0)
	{
		//message box
        int ret;
        int flags = wxOK;
		if (argc==2)
			flags|= wxICON_INFORMATION;
		else
		{
			arg1=argv[2];
			if (arg1.CompareTo(OPT_MB_INFO,wxString::ignoreCase)==0)
				flags|=wxICON_INFORMATION;
			else if (arg1.CompareTo(OPT_MB_EXCLA)==0)
				flags|=wxICON_EXCLAMATION;
			else if (arg1.CompareTo(OPT_MB_STOP)==0)
				flags|=wxICON_STOP;
			else if (arg1.CompareTo(OPT_MB_QUES)==0)
			{
				flags &= ~wxOK;
				flags |= (wxOK|wxCANCEL|wxICON_QUESTION);
			}
	        else
		        return Usage();
		}
		flags |=wxSTAY_ON_TOP;
		wxMessageDialog dlg(NULL,m_data.text,m_data.title,flags);
		ret=dlg.ShowModal();
        switch (ret)
        {
        case wxID_OK:
            m_data.errlevel = 0;
            break;
        case wxID_CANCEL:
            m_data.errlevel = 2;
            break;
        }

	}
	else
	{
		//wizard page
        /* Handle wizard page things */
		long type=wxBITMAP_TYPE_BMP;
#ifndef _WINDOWS
		type=wxBITMAP_TYPE_XPM;
#endif
		if (m_data.bmp.Length()>0)
			m_data.bitmap.LoadFile(m_data.bmp,type);
		type=wxBITMAP_TYPE_ICO;
#ifndef _WINDOWS
		type=wxBITMAP_TYPE_XPM;
#endif
		if (m_data.ico.Length()>0)
			m_data.icon.LoadFile(m_data.ico,type);

        /* Read other options */
        m_data.opt_noback = 0;
        m_data.opt_finish = 0;

		wxString cmd="";
        /* First thing now must be a general option or a wizard command */
		int i=1;
        do {
			i++;
			if (arg1.CompareTo(OPT_NOBACK,wxString::ignoreCase)==0)
			{
				m_data.opt_noback = 1;
		        if (argc>i)
					arg1=argv[i];
				else
					arg1="";
			}
			else if (arg1.CompareTo(OPT_FINISH,wxString::ignoreCase)==0)
			{
                m_data.opt_finish = 1;
		        if (argc>i)
					arg1=argv[i];
				else
					arg1="";
			}
			else
				cmd=arg1;
			
        } while (!cmd.Length() && argc>i);
        if (argc>i)
			arg1=argv[i++];
		else
			arg1="";
		if (cmd.Length()==0)
            return Usage();
		
		if (cmd.CompareTo(CMD_TB,wxString::ignoreCase)==0)
        {
            /* No TB specific options */
            if (arg1.Length())
                return Usage();
			wxTextDialog dlg(&m_data);
			m_data.errlevel = dlg.ShowModal();
        }
        else if (cmd.CompareTo(CMD_EB,wxString::ignoreCase) == 0)
        {
            /* EB specific options */
            if (!arg1.Length() || arg1.CompareTo(OPT_EB_PLAIN,wxString::ignoreCase) == 0)
			{
				wxEditDialog dlg(&m_data);
				m_data.errlevel = dlg.ShowModal();
			}
            else if (arg1.Length() && arg1.CompareTo(OPT_EB_HIDDEN,wxString::ignoreCase) == 0)
			{
				wxEditDialog dlg(&m_data,TRUE);
				m_data.errlevel=dlg.ShowModal();
			}
            else
                return Usage();
        }
		else if (cmd.CompareTo(CMD_RB,wxString::ignoreCase) == 0)
        {
            /* No RB specific options */
            if (arg1.Length())
                return Usage();
			wxRadioDialog dlg(&m_data);
			m_data.errlevel=dlg.ShowModal();
        }
		else if (cmd.CompareTo(CMD_CL,wxString::ignoreCase) == 0)
        {
            /* No CL specific options */
			if (arg1.Length())
				return Usage();
			wxCheckDialog dlg(&m_data);
			m_data.errlevel=dlg.ShowModal();
        }
		else if (cmd.CompareTo(CMD_FB,wxString::ignoreCase) == 0)
        {
//            /* FB specific options */
			if (!arg1.Length() || arg1.CompareTo(OPT_FB_FILE,wxString::ignoreCase) == 0)
			{
				  wxFileBrowseDialog dlg(&m_data,FALSE);
				  m_data.errlevel=dlg.ShowModal();
			}
			else if (arg1.Length() && arg1.CompareTo(OPT_FB_DIR,wxString::ignoreCase) == 0)
			{
				  wxFileBrowseDialog dlg(&m_data,TRUE);
				  m_data.errlevel=dlg.ShowModal();
			}
            else
                return Usage();
        }
		else if (cmd.CompareTo(CMD_FT,wxString::ignoreCase) == 0)
        {
            /* No FT specific options */
			if (arg1.Length())
				return Usage();
			wxFileTextDialog dlg(&m_data);
			m_data.errlevel=dlg.ShowModal();
        }
		else if (cmd.CompareTo(CMD_CB,wxString::ignoreCase) == 0)
        {
            /* No CB specific options */
			if (arg1.Length())
				return Usage();
			wxComboDialog dlg(&m_data);
			m_data.errlevel=dlg.ShowModal();
        }
		else if (cmd.CompareTo(CMD_LB,wxString::ignoreCase) == 0)
        {
            /* FB specific options */
			if (!arg1.Length() || arg1.CompareTo(OPT_LB_SINGLE,wxString::ignoreCase) == 0)
			{
				wxListDialog dlg(&m_data,FALSE);
				m_data.errlevel=dlg.ShowModal();
			}
			else if (arg1.Length() && arg1.CompareTo(OPT_LB_MULTIPLE,wxString::ignoreCase) == 0)
			{
				wxListDialog dlg(&m_data,TRUE);
				m_data.errlevel=dlg.ShowModal();
			}
            else
                return Usage();
        }
        else
            return Usage();
	}

	if (m_data.bat.Length())
	{
		wxString output=CreateShellScript();
		wxFile file;
		if (file.Create(m_data.bat,true))
		{
			file.Write(output);
			file.Close();
		}
	}
	return TRUE;;
}

int wxWizApp::OnExit()
{
	return m_data.errlevel;
}

bool wxWizApp::Usage()
{
	m_data.title=APP_TITLE;
	m_data.text=
	    "Unknown option.\n"
		"\n"
		"Syntax:\n"
		"wizapp MB INFORMATION\n"
		"wizapp MB EXCLAMATION\n"
		"wizapp MB STOP\n"
		"wizapp MB QUESTION\n"
		"wizapp [ NOBACK ] [ FINISH ] command [options]\n"
		"\n"
		"Commands:\n"
		"CB\t"
			"Combo box\n"
		"CL\t"
	        "List of checkboxes\n"
		"EB PLAIN | HIDDEN\n"
	        "\tEditbox, showing text or *****\n"
		"FB FILE | DIR\n"
			"\tFile browser or directory browser\n"
	    "FT\t"
		    "Filetext in a box with scroll bars\n"
	    "LB SINGLE | MULTIPLE\n"
		    "\tListbox, single selection or multiple selection\n"
	    "RB\t"
		    "Set of radiobuttons\n"
		"TB\t"
			"Textbox\n"
		"\n"
		"http://wizapp.sf.net";
    
    
    m_data.opt_noback = 1;
    m_data.opt_finish = 1;

 	wxTextDialog dlg(&m_data);
	dlg.ShowModal();
	return FALSE;
}

wxString wxWizApp::CreateShellScript()
{
	if (m_data.bat.Length()<4)
		return CreateShScript();
	if (m_data.bat.Right(3).CompareTo("bat",wxString::ignoreCase)==0)
		return CreateDosScript();
	else
		return CreateShScript();
}

wxString wxWizApp::CreateShScript()
{
	wxString output="#!/bin/sh\n\n";

	wxString prefix;
	if (wxGetEnv(VAR_PREFIX, &prefix) == 0)
		prefix = DEF_PREFIX;
	wxString var;
	var.Printf("%s%s",prefix.c_str(),VAR_OUTPUT);
	wxString out;
	out.Printf("%s=%s;EXPORT %s\n",var.c_str(),
		m_data.output.c_str(),var.c_str());
	output+=out;
	var.Printf("%s%s",prefix.c_str(),VAR_OUTNUM);
	out.Printf("%s=%s;EXPORT %s\n",var.c_str(),m_data.outnum.c_str(),
		var.c_str());
	output+=out;
	return output;
}

wxString wxWizApp::CreateDosScript()
{
		m_data.output.Replace("<","^<");
		m_data.output.Replace(">","^>");
		m_data.output.Replace("|","^|");
		m_data.output.Replace("&","^&");
		wxString output="";

		wxString prefix;
		if (wxGetEnv(VAR_PREFIX, &prefix) == 0)
			prefix = DEF_PREFIX;
		wxString var;
		var.Printf("%s%s",prefix.c_str(),VAR_OUTPUT);
		wxString out;
		out.Printf("set %s=%s\n",var.c_str(),m_data.output.c_str());
		output+=out;
		var.Printf("%s%s",prefix.c_str(),VAR_OUTNUM);
		out.Printf("set %s=%s\n",var.c_str(),m_data.outnum.c_str());
		output+=out;
		return output;
}

