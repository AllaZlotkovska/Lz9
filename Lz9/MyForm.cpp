#include "MyForm.h"
#include <Windows.h>
#include <math.h>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lz9::MyForm form;// ��'� ������ �������, ���������, myproekt ��� ��.
	Application::Run(% form);
}