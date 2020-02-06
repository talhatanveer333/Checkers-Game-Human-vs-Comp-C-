#include "Bead 12.h";
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::Bead12 form;
	Application::Run(%form);

}

