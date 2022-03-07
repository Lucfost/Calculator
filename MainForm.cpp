#include "MainForm.h"
#include <conio.h>


using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::MainForm form;
	Application::Run(% form);
}