#pragma once
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include <constant.h>
#include <wx/wx.h>
#include "wx/notebook.h"
#include <wx/wxprec.h>


class ISO8583MDIFrame :public wxFrame
{
public:
	void setUpToolbar();
	wxNotebook* notebook = nullptr;
	
	wxMenu* file;
	wxMenu* edit;
	
	wxMenu* project;
	wxMenu* options;
	wxMenu* tools;
	wxMenu* view;
	wxMenu* window;
	wxMenu* help;
	wxMenu* work;
	
	wxMenuBar* menubar;
	
	
	wxPanel* panel;
	wxTextCtrl* text;
	
	void addFrame()
	{
		// Create the notebook
		///if(!notebook)
		////	notebook = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxSize(300, 200));
		// Create the image list
		////wxImageList* imageList = new wxImageList(16, 16, true, 3);
		///imageList->Add(wxIcon(copy_xpm));
		///imageList->Add(wxIcon(paste_xpm));
		///imageList->Add(wxIcon(cut_xpm));
		// Create and add the pages
		//wxPanel* window1 = new wxPanel(notebook, wxID_ANY);
		///wxPanel* window2 = new wxPanel(notebook, wxID_ANY);
		///wxPanel* window3 = new wxPanel(notebook, wxID_ANY);
		///window1->AddChild(new wxButton(window1, wxID_ANY,wxT("X")));
		///notebook->AddPage(window1, wxT("Tab one"), true, 0);
		///notebook->AddPage(window2, wxT("Tab two"), false, 1);
		//notebook->AddPage(window3, wxT("Tab three"), false, 2);

		///if (notebook)
		///	notebook->Refresh();

		this->Refresh();
	}


 

	ISO8583MDIFrame();

	void OnTestChild(wxCommandEvent& event);
	void OnQuit(wxCommandEvent& event);
	void OnSize(wxSizeEvent& event);


	wxDECLARE_EVENT_TABLE();
};
