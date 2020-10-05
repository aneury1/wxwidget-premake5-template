
#include <constant.h>
#include <ISO8583MDIChild.h>



wxBEGIN_EVENT_TABLE(ISO8583MDIChild, wxFrame)
	EVT_MENU(ISO_PACKET, ISO8583MDIChild::OnTestChild)
wxEND_EVENT_TABLE()



void ISO8583MDIChild::OnTestChild(wxCommandEvent& WXUNUSED(event))
{

}

ISO8583MDIChild::ISO8583MDIChild(wxMDIParentFrame* frame)  :
    wxMDIChildFrame(frame,
        wxID_ANY,
        wxString("title"),
        wxPoint(100, 100), wxSize(200, 200))
{
}
