#include "pch.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
// Indicates that the COM threading model for an application is single-threaded apartment (STA).
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles(); // colors, fonts, and other visual elements 
	Application::SetCompatibleTextRenderingDefault(false); // Not using GDI+ text rendering
	Productivity::MyForm form; // Creating an instance of MyForm 
	Application::Run(% form); // Begins message loop for application
}