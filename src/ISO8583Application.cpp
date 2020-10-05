#include "ISO8583Application.h"
#include "ISO8583MDIFrame.h"


bool ISO8583Application::OnInit()
{
	ISO8583MDIFrame* frame = new ISO8583MDIFrame();
	frame->Show(true);
	return true;
}


wxIMPLEMENT_APP(ISO8583Application);