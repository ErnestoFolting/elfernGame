#include "MyForm.h"
#include <Windows.h>
using namespace elfernGame; // Название проекта
using namespace System;
using namespace System::Drawing;
using namespace System::ComponentModel;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

System::Void elfernGame::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	cli::array<Button^>^ buttons = gcnew cli::array<Button^>(14);
	
	Button^ check = gcnew Button();
	int i = 0;
	check->BackgroundImage = imageList1->Images[i];
	check->Size = check->BackgroundImage->Size;
	this->Controls->Add(check);
	check->Click += gcnew System::EventHandler(this, &MyForm::check_Click);
	Button^ check2 = gcnew Button();
	check->Location = System::Drawing::Point(25, 0);
	i = 2;
	check2->BackgroundImage = imageList1->Images[i];
	check2->Size = check2->BackgroundImage->Size;
	this->Controls->Add(check2);
	check2->Click += gcnew System::EventHandler(this, &MyForm::check_Click);
	check2->Name = "checkkkk";
	buttons[0] = check;
	buttons[1] = check2;
	buttons[0] = nullptr;
}

System::Void elfernGame::MyForm::check_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("From check",Convert::ToString(sender->ToString()));
}
