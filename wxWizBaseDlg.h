// wxWizBaseDlg.h: interface for the wxWizBaseDlg class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WXWIZBASEDLG_H__3A30FE98_E5F6_44F4_94B8_FE5012197381__INCLUDED_)
#define AFX_WXWIZBASEDLG_H__3A30FE98_E5F6_44F4_94B8_FE5012197381__INCLUDED_

#include "WizAppData.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define ID_NEXT		100
#define ID_CANCEL	101
#define ID_BACK		102
#define ID_STATIC	103
#define ID_BITMAP	104
#define ID_EDIT		105
#define ID_RADIO1	106
#define ID_RADIO2	107
#define ID_RADIO3	108
#define ID_RADIO4	109
#define ID_RADIO5	110
#define ID_RADIO6	111
#define ID_RADIO7	112
#define ID_RADIO8	113
#define ID_RADIO9	114
#define ID_RADIO10	115
#define ID_TEXT		116
#define ID_CHECK1	117
#define ID_CHECK2	118
#define ID_CHECK3	119
#define ID_CHECK4	120
#define ID_CHECK5	121
#define ID_CHECK6	122
#define ID_CHECK7	123
#define ID_CHECK8	124
#define ID_CHECK9	125
#define ID_CHECK10	126
#define ID_BROWSE	127
#define ID_FILE		128
#define ID_FILETEXT	129
#define ID_COMBO	130
#define ID_LISTSINGLE	131
#define ID_LISTMULTIPLE	132
#define ID_VERSION	133
#define ID_EDITHIDDEN	134
#define ID_LARGETEXT	99

class wxWizBaseDlg : public wxDialog  
{
public:
	wxWizBaseDlg(WizAppData* data);
	virtual ~wxWizBaseDlg();
protected:
	WizAppData* m_data;
	virtual void OnNextButtonClick(wxCommandEvent& event);
	virtual void OnBackButtonClick(wxCommandEvent& event);
	virtual void OnCancelButtonClick(wxCommandEvent& event);
	virtual void OnBrowseButtonClick(wxCommandEvent& event);
	virtual void OnButtonPressed(int errlevel);
DECLARE_EVENT_TABLE()
};

#endif // !defined(AFX_WXWIZBASEDLG_H__3A30FE98_E5F6_44F4_94B8_FE5012197381__INCLUDED_)
