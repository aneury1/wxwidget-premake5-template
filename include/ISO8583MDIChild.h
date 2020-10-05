#pragma once

#include <wx/wxprec.h>

class ISO8583MDIChild :public wxMDIChildFrame {


public:
	void  OnTestChild(wxCommandEvent& event);
	
	ISO8583MDIChild(wxMDIParentFrame* frame);
	virtual ~ISO8583MDIChild(){}
	
private:
	wxDECLARE_EVENT_TABLE();
};
