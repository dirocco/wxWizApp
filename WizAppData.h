// WizAppData.h: interface for the WizAppData class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WIZAPPDATA_H__646D1429_ECDD_4BFC_B5D4_2657A418884F__INCLUDED_)
#define AFX_WIZAPPDATA_H__646D1429_ECDD_4BFC_B5D4_2657A418884F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class WizAppData  
{
public:
	WizAppData();
	virtual ~WizAppData();
	static int ExplodeList(const wxString str,char sep,wxArrayString& items);

	wxString text;
	wxString title;
	wxString sig;
	wxString input;        /* Reads from wainput */
	wxString fileinput;    /* contents of wafile */

	wxString file;

	wxString sound;

	char listsep;
	char eol;

	int errlevel;

	wxString output;
	wxString outnum;
	int opt_noback;
	int opt_finish;

	wxString labels;
	wxString labelback;
	wxString labelnext;
	wxString labelfinish;
	wxString labelcancel;
	wxString labelbrowse;

	wxString bat;
	wxString bmp;
	wxString ico;
	wxBitmap bitmap;
	wxIcon icon;
protected:
	void GetFile();
	void GetLabels();
	void BuildInputEnvironment();

};

#endif // !defined(AFX_WIZAPPDATA_H__646D1429_ECDD_4BFC_B5D4_2657A418884F__INCLUDED_)
