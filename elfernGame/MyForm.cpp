#include "MyForm.h"
#include <Windows.h>

using namespace elfernGame; // �������� �������
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

void elfernGame::MyForm::updateTable(table tb)
{
	resetNames();
	for (int i = 0; i < 32; i++) {
		buttonsPlayer[31-i]->Visible = false;
		buttonsComputer[31-i]->Visible = false;
	}
	//Computer's cards drawing
	for (int i = 0; i < tb.computerCards.size();i++) {
		//buttonsComputer[i]->BackgroundImage = imageList1->Images[32];
		buttonsComputer[i]->Name = Convert::ToString(tb.computerCards[i]);
		buttonsComputer[i]->BackgroundImage = imageList1->Images[tb.computerCards[i]];
		buttonsComputer[tb.computerCards.size() - i - 1]->Visible = true;

	}

	//Player's cards drawing
	for (int i = 0; i < tb.playerCards.size(); i++) {
		buttonsPlayer[i]->Name = Convert::ToString(tb.playerCards[i]);
		buttonsPlayer[i]->BackgroundImage = imageList1->Images[tb.playerCards[i]];
		//buttonsPlayer[tb.playerCards.size() - i - 1]->Visible = true;
		buttonsPlayer[i]->Visible = true;
	}

	//deck empty check

	if (tb.deck.size() == 0) {
		button67->Visible = false;
		label3->Visible = false;
	}

	//Current cards drawing

	if (tb.computerCurrent != -1) {
		button66->Visible = true;
		button66->Name = Convert::ToString(tb.computerCurrent);
		button66->BackgroundImage = imageList1->Images[tb.computerCurrent];
	}
	if (tb.playerCurrent != -1) {
		button65->Visible = true;
		button65->Name = Convert::ToString(tb.playerCurrent);
		button65->BackgroundImage = imageList1->Images[tb.playerCurrent];
	}
}

void elfernGame::MyForm::playerMove(int cardId)
{
	table tb = getTable();
	//MessageBox::Show(Convert::ToString(cardId));
	disableButtons();
	tb.playerMove(cardId);
	label1->Visible = true;
	updateTable(tb);
	timer1->Start();
}

System::Void elfernGame::MyForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	table tb = getTable();
	int cardToMove = rand() % tb.computerCards.size();
	tb.computerMove(cardToMove);
	label2->Visible = true;
	updateTable(tb);
	timer1->Stop();
	timer2->Start();
}

System::Void elfernGame::MyForm::timer2_Tick(System::Object^ sender, System::EventArgs^ e)
{
	table tb = getTable();
	tb.move();
	label1->Visible = false;
	label2->Visible = false;
	button65->Visible = false;
	button66->Visible = false;
	updateTable(tb);
	enableButtons();
	timer2->Stop();
}


table elfernGame::MyForm::getTable()
{
	table tb;
	for (int i = 0; i < 32; i++) {
		if (buttonsPlayer[i]->Name != "") {
			tb.playerCards.push_back(Convert::ToInt32(buttonsPlayer[i]->Name));
		}
	}
	for (int i = 0; i < 32; i++) {
		if (buttonsComputer[i]->Name != "") {
			tb.computerCards.push_back(Convert::ToInt32(buttonsComputer[i]->Name));
		}
	}
	vector<int> temp;
	for (int i = 0; i < 32; i++) {
		if (!tb.contains(tb.computerCards, i) && !tb.contains(tb.playerCards, i)) {
			temp.push_back(i);
		}
	}
	tb.deck = temp;
	if (button65->Name != "") {
		tb.playerCurrent = Convert::ToInt32(button65->Name);
	}
	if (button66->Name != "") {
		tb.computerCurrent = Convert::ToInt32(button66->Name);
	}
	return tb;
}

void elfernGame::MyForm::resetNames()
{
	for (int i = 0; i < 32; i++) {
		buttonsPlayer[i]->Name = "";
		buttonsComputer[i]->Name = "";
	}
	button65->Name = "";
	button66->Name = "";
}

void elfernGame::MyForm::disableButtons()
{
	for (int i = 0; i < 32; i++) {
		buttonsPlayer[i]->Enabled = false;
	}
}

void elfernGame::MyForm::enableButtons()
{
	for (int i = 0; i < 32; i++) {
		buttonsPlayer[i]->Enabled = true;
	}
}

System::Void elfernGame::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	playerMove(0);
}


System::Void elfernGame::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	srand(time(0));
	button67->BackgroundImage = imageList1->Images[32];
	//Player's buttons array
	buttonsPlayer[0] = button1;
	buttonsPlayer[1] = button2;
	buttonsPlayer[2] = button3;
	buttonsPlayer[3] = button4;
	buttonsPlayer[4] = button5;
	buttonsPlayer[5] = button6;
	buttonsPlayer[6] = button7;
	buttonsPlayer[7] = button8;
	buttonsPlayer[8] = button9;
	buttonsPlayer[9] = button10;
	buttonsPlayer[10] = button11;
	buttonsPlayer[11] = button12;
	buttonsPlayer[12] = button13;
	buttonsPlayer[13] = button14;
	buttonsPlayer[14] = button15;
	buttonsPlayer[15] = button16;
	buttonsPlayer[16] = button17;
	buttonsPlayer[17] = button18;
	buttonsPlayer[18] = button19;
	buttonsPlayer[19] = button20;
	buttonsPlayer[20] = button21;
	buttonsPlayer[21] = button22;
	buttonsPlayer[22] = button23;
	buttonsPlayer[23] = button24;
	buttonsPlayer[24] = button25;
	buttonsPlayer[25] = button26;
	buttonsPlayer[26] = button27;
	buttonsPlayer[27] = button28;
	buttonsPlayer[28] = button29;
	buttonsPlayer[29] = button30;
	buttonsPlayer[30] = button31;
	buttonsPlayer[31] = button32;

	//Computer's buttons array
	buttonsComputer[0] = button33;
	buttonsComputer[1] = button34;
	buttonsComputer[2] = button35;
	buttonsComputer[3] = button36;
	buttonsComputer[4] = button37;
	buttonsComputer[5] = button38;
	buttonsComputer[6] = button39;
	buttonsComputer[7] = button40;
	buttonsComputer[8] = button41;
	buttonsComputer[9] = button42;
	buttonsComputer[10] = button43;
	buttonsComputer[11] = button44;
	buttonsComputer[12] = button45;
	buttonsComputer[13] = button46;
	buttonsComputer[14] = button47;
	buttonsComputer[15] = button48;
	buttonsComputer[16] = button49;
	buttonsComputer[17] = button50;
	buttonsComputer[18] = button51;
	buttonsComputer[19] = button52;
	buttonsComputer[20] = button53;
	buttonsComputer[21] = button54;
	buttonsComputer[22] = button55;
	buttonsComputer[23] = button56;
	buttonsComputer[24] = button57;
	buttonsComputer[25] = button58;
	buttonsComputer[26] = button59;
	buttonsComputer[27] = button60;
	buttonsComputer[28] = button61;
	buttonsComputer[29] = button62;
	buttonsComputer[30] = button63;
	buttonsComputer[31] = button64;

	
}

System::Void elfernGame::MyForm::button68_Click(System::Object^ sender, System::EventArgs^ e)
{
	table tb;
	tb.start();
	updateTable(tb);
	button68->Visible = false;
	status->Text = "Your move";
	button67->Visible = true;
	label3->Visible = true;
}


