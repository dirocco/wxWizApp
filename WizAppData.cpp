// WizAppData.cpp: implementation of the WizAppData class.
//
//////////////////////////////////////////////////////////////////////
// ----------------------------------------------------------------------------
// headers
// ----------------------------------------------------------------------------
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
	#include "wx/wx.h"
#endif

#include "wx/tokenzr.h"
#include "wx/file.h"


#include "defines.h"
#include "WizAppData.h"


//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

WizAppData::WizAppData()
{
	ico="";
	bmp="";
	errlevel=256;
	sig.Printf("%s %s",APP_TITLE,APP_VERSION);
	title=APP_TITLE;
	bitmap=wxBitmap("WIZAPP.xpm");
	icon=wxIcon("wxWizApp.xpm");
	BuildInputEnvironment();
	GetLabels();
	GetFile();
}

WizAppData::~WizAppData()
{

}

void WizAppData::BuildInputEnvironment()
{
	wxString prefix;
	wxString tmp;

    if (wxGetEnv(VAR_PREFIX, &prefix) == 0)
        prefix = DEF_PREFIX;
	
	wxString var;
	var.Printf("%s%s",prefix.c_str(),VAR_TEXT);
	wxGetEnv(var,&text);
	var.Printf("%s%s",prefix.c_str(),VAR_TITLE);
	wxGetEnv(var,&title);
	var.Printf("%s%s",prefix.c_str(),VAR_BMP);
	wxGetEnv(var,&bmp);
	var.Printf("%s%s",prefix.c_str(),VAR_ICO);
	wxGetEnv(var,&ico);
	var.Printf("%s%s",prefix.c_str(),VAR_SIG);
	wxGetEnv(var,&sig);
	var.Printf("%s%s",prefix.c_str(),VAR_SOUND);
	wxGetEnv(var,&sound);
	var.Printf("%s%s",prefix.c_str(),VAR_FILE);
	wxGetEnv(var,&file);
	var.Printf("%s%s",prefix.c_str(),VAR_INPUT);
	wxGetEnv(var,&input);
	var.Printf("%s%s",prefix.c_str(),VAR_LABELS);
	wxGetEnv(var,&labels);
	var.Printf("%s%s",prefix.c_str(),VAR_OUTPUT);
	wxGetEnv(var,&output);
	var.Printf("%s%s",prefix.c_str(),VAR_OUTNUM);
	wxGetEnv(var,&outnum);
	var.Printf("%s%s",prefix.c_str(),VAR_BAT);
	wxGetEnv(var,&bat);
	var.Printf("%s%s",prefix.c_str(),VAR_LISTSEP);
	wxGetEnv(var,&tmp);
	if (tmp.c_str()[0]=='\0')
		listsep=DEF_LISTSEP;
	else
		listsep=tmp.c_str()[0];
	var.Printf("%s%s",prefix.c_str(),VAR_EOL);
	tmp="";
	wxGetEnv(var,&tmp);
	if (tmp.c_str()[0]=='\0')
		eol=DEF_EOL;
	else
		eol=tmp.c_str()[0];

	wxString eols=eol;
	input.Replace(eols,"\n");
	text.Replace(eols,"\n");
}

void WizAppData::GetLabels()
{
	wxArrayString labs;
	int num=ExplodeList(labels,listsep,labs);

    if (num > 0 && *labs[0])
        labelback = labs[0];
    else
        labelback = LABEL_BACK;
    if (num > 1 && *labs[1])
        labelnext = labs[1];
    else
        labelnext = LABEL_NEXT;
    if (num > 2 && *labs[2])
        labelfinish = labs[2];
    else
        labelfinish = LABEL_FINISH;
    if (num > 3 && *labs[3])
        labelcancel = labs[3];
    else
        labelcancel = LABEL_CANCEL;
    if (num > 4  && *labs[4])
        labelbrowse = labs[4];
    else
        labelbrowse = LABEL_BROWSE;
	labs.Clear();
}

void WizAppData::GetFile()
{
	if (file.Len()>0)
	{
		wxFile fd;
		if (fd.Open(file))
		{
			char* buf=new char[fd.Length()+1];
			buf[fd.Length()]=0;
			fd.Read(buf,fd.Length());
			fd.Close();
			fileinput=buf;
			delete buf;
		}
	}
}

int WizAppData::ExplodeList(const wxString str,char sep,wxArrayString& items)
{
	items.Clear();
	wxStringTokenizer toks(str,wxString(sep));
	int rv=toks.CountTokens();
	while (toks.HasMoreTokens())
	{
		wxString str=toks.GetNextToken();
		items.Add(str);
	}
	return rv;
}
