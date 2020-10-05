#include "ISO8583MDIFrame.h"
#include <constant.h>
#include <ISO8583MDIChild.h>

#include "wx/combobox.h"

wxBEGIN_EVENT_TABLE(ISO8583MDIFrame, wxFrame)
     EVT_MENU(EVENT_TEST, ISO8583MDIFrame::OnTestChild)
     EVT_MENU(wxID_EXIT, ISO8583MDIFrame::OnQuit)
     EVT_SIZE( ISO8583MDIFrame::OnSize)
wxEND_EVENT_TABLE()

ISO8583MDIFrame::ISO8583MDIFrame() : wxFrame(nullptr, wxID_ANY, "AISO8583 -- Terminal",wxDefaultPosition, wxSize(500,500))
{
    this->setUpToolbar();
}
 


void ISO8583MDIFrame::setUpToolbar()
{
    wxMenu* menuFile = new wxMenu;
    menuFile->Append(EVENT_TEST, "&new...\tCtrl-H", "Create test child from this app.");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

   /// wxMenu* menuHelp = new wxMenu;
   /// menuHelp->Append(wxID_ABOUT);

    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
   /// menuBar->Append(menuHelp, "&Help");


    SetMenuBar(menuBar);//
    wxStatusBar *temp = CreateStatusBar();
    ///temp->AddChild(wxButton(this, wxID_ANY, wxT("any")));
    SetStatusText("AISO8583 - - Terminal Emulator");

    wxArrayString strings;
    strings.Add(wxT("Apple"));
    strings.Add(wxT("Orange"));
    strings.Add(wxT("Pear"));
    strings.Add(wxT("Grapefruit"));
     panel = new wxPanel(this, wxID_ANY, wxPoint(1,1), this->GetSize());
   /// wxComboBox* combo = new wxComboBox(panel, ID_COMBOBOX,wxT("Apple"), wxDefaultPosition, wxSize(wxDefaultSize.x, 64),
   ////     strings, wxCB_DROPDOWN);
    ////wxListBox* listBox = new wxListBox(panel, wxID_ANY, wxPoint(100,0), wxSize(180, 80), strings, wxLB_SINGLE);
    ////   wxString str;
   //// str << std::to_string((30 / 100) + 1.0);
    text = new wxTextCtrl(panel, wxID_ANY," ", wxPoint(0, 0),panel->GetSize(), wxTE_MULTILINE);

}

void ISO8583MDIFrame::OnTestChild(wxCommandEvent& WXUNUSED(event))
{
    this->addFrame();
    ///ISO8583MDIChild* child = new ISO8583MDIChild(this);
    ////child->Show(true);
    ////  ISO8583MDIFrame* frame = new ISO8583MDIFrame();
    ////  frame->Show(true);
    ////  wxString msg;
    ////  msg.Printf(wxT("Hello and welcome to %s is Visible %d") wxVERSION_STRING, (child->IsVisible()?1:0));
    ////  wxMessageBox(msg, wxT("About Minimal"), wxOK | wxICON_INFORMATION, this);
}

void ISO8583MDIFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void ISO8583MDIFrame::OnSize(wxSizeEvent& event)
{
    if (panel) {
 
         
        ///text->Refresh();
    }
}
