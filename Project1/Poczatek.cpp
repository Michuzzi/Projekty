#include "Poczatek.h"


#include "stdafx.h"
#include "MyForm.h"
#include "Game.h"
#include "Poczatek.h"

using namespace Project1;
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main(array<System::String ^> ^args)
{

	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
		Project1::MyForm forma;
	Project1::Poczatek form;

		Application::Run(%form);
	

}
