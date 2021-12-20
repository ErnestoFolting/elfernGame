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


//Draw the table 
void elfernGame::MyForm::updateTable(table tb)
{

	resetNames();

	if (tb.playerCards.size() != 0) {
		for (int i = tb.playerCards.size() - 1; i >= 0; i--) {
			buttonsPlayer[i]->Visible = true;
		}
		for (int i = 31; i >= tb.playerCards.size(); i--) {
			buttonsPlayer[i]->Visible = false;
		}
	}
	else {
		buttonsPlayer[0]->Visible = false;
	}
	if (tb.computerCards.size() != 0) {
		for (int i = tb.computerCards.size() - 1; i >= 0; i--) {
			buttonsComputer[i]->Visible = true;
		}
		for (int i = 31; i >= tb.computerCards.size(); i--) {
			buttonsComputer[i]->Visible = false;
		}
	}
	else {
		buttonsComputer[0]->Visible = false;
	}

	//Computer's cards drawing
	for (int i = 0; i < tb.computerCards.size();i++) {
		//buttonsComputer[i]->BackgroundImage = imageList1->Images[32];
		buttonsComputer[i]->Name = Convert::ToString(tb.computerCards[i]);
		buttonsComputer[i]->BackgroundImage = imageList1->Images[tb.computerCards[i]];

	}

	//Player's cards drawing
	for (int i = 0; i < tb.playerCards.size(); i++) {
		buttonsPlayer[i]->Name = Convert::ToString(tb.playerCards[i]);
		buttonsPlayer[i]->BackgroundImage = imageList1->Images[tb.playerCards[i]];
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

//Player's move 
void elfernGame::MyForm::playerMove(int cardId)
{
	//redirect to player answer
	if (label2->Visible == true) {
		button65->Name = (Convert::ToString(cardId));
		playerAnswer(cardId);
	}
	else {
		table tb = getTable();
		//MessageBox::Show(Convert::ToString(cardId));
		disableButtons();
		tb.playerMove(cardId);
		label1->Visible = true;
		status->Text = "Computer's move";
		updateTable(tb);
		timer1->Start();
	}
	
}

//player's answer
void elfernGame::MyForm::playerAnswer(int cardId)
{
	table tb = getTable();
	disableButtons();
	tb.playerMove(cardId);
	label1->Visible = true;
	updateTable(tb);
	timer4->Start();
}

//Computer's answer
System::Void elfernGame::MyForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	table tb = getTable();

	//here must be evaluation of 2 moves to move for computer

	tb.computerAnswer();
	label2->Visible = true;
	updateTable(tb);
	timer1->Stop();
	timer2->Start();
}

//table move after player's move
System::Void elfernGame::MyForm::timer2_Tick(System::Object^ sender, System::EventArgs^ e)
{
	table tb = getTable();
	if (tb.movePlayerFirst()) {
		label6->Text += tb.playerCards[tb.playerCards.size() - 1] + " " + tb.playerCards[tb.playerCards.size() - 2] + " ";
	}
	label1->Visible = false;
	label2->Visible = false;
	button65->Visible = false;
	button66->Visible = false;
	updateTable(tb);
	timer2->Stop();
	timer6->Start();
}

//Computer's move 
System::Void elfernGame::MyForm::timer3_Tick(System::Object^ sender, System::EventArgs^ e)
{
	table tb = getTable();
	childrenFromPosition(tb);
	tb.computerMove(0);
	label2->Visible = true;
	updateTable(tb);
	status->Text = "Your move";
	enableButtons();
	timer3->Stop();
}

//table move after computer's move
System::Void elfernGame::MyForm::timer4_Tick(System::Object^ sender, System::EventArgs^ e)
{

	
	table tb = getTable();
	if (tb.moveComputerFirst()) {
		label6->Text += tb.playerCards[tb.playerCards.size() - 1] + " " + tb.playerCards[tb.playerCards.size() - 2] + " ";
	}
	label1->Visible = false;
	label2->Visible = false;
	button65->Visible = false;
	button66->Visible = false;
	updateTable(tb);
	timer4->Stop();
	timer5->Start();
}

//Give cards after computer's move
System::Void elfernGame::MyForm::timer5_Tick(System::Object^ sender, System::EventArgs^ e)
{
	table tb = getTable();
	tb.giveCardsAfterComputerMove();
	updateTable(tb);
	if (!finishCheck()) {
		label5->Text = Convert::ToString(Convert::ToInt32(label5->Text) + 1);
		enableButtons();
	}
	timer5->Stop();
}

//Give cards after player's move
System::Void elfernGame::MyForm::timer6_Tick(System::Object^ sender, System::EventArgs^ e)
{
	table tb = getTable();
	tb.giveCardsAfterPlayerMove();
	updateTable(tb);
	timer6->Stop();
	if (!finishCheck()) {
		label5->Text = Convert::ToString(Convert::ToInt32(label5->Text) + 1);
		timer3->Start();
	}
}

//get tb from table
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


int elfernGame::MyForm::minimax(table position, int depth, int alpha, int beta, bool maximizingPlayer)
{
	return 0;
}

//vector<int> kalahaGame::MyForm::minimax(child position, int depth, int alpha, int beta, bool maximizingPlayer)
//{
//	if (depth == 0 || minimaxGameOverCheck(position)) {
//		vector<int> temp;
//		temp.push_back(staticEvaluation(position));
//		return temp;
//	}
//	if (maximizingPlayer) {
//		int maxEval = -100;
//		vector<child>children = childrenFromPosition(position);
//		int childPos = 0;
//		for (int i = 0; i < children.size(); i++) {
//			int eval = minimax(children[i], depth - 1, alpha, beta, false)[0];
//			if (eval > maxEval) childPos = i;
//			maxEval = max(maxEval, eval);
//			alpha = max(alpha, eval);
//			if (beta <= alpha) {
//				break;
//			}
//		}
//		vector<int> temp;
//		temp.push_back(maxEval);
//		temp.push_back(childPos);
//		return temp;
//	}
//	else {
//		int minEval = 100;
//		vector<child>children = childrenFromPosition(position);
//		int childPos = 0;
//		for (int i = 0; i < children.size(); i++) {
//			int eval = minimax(children[i], depth - 1, alpha, beta, true)[0];
//			if (eval < minEval) childPos = i;
//			minEval = min(minEval, eval);
//			beta = min(beta, eval);
//			if (beta <= alpha) {
//				break;
//			}
//		}
//		vector<int> temp;
//		temp.push_back(minEval);
//		temp.push_back(childPos);
//		return temp;
//	}
//}

vector<child> elfernGame::MyForm::childrenFromPosition(table tb)
{
	System::String^ temp = label6->Text;
	std::string showedCards = msclr::interop::marshal_as<std::string>(temp);
	vector<card> possibleCards;
	for (int i = 0; i < 32; i++) {
		possibleCards.push_back(card(i, 0));
	}
	int counterShowedCards = 0;
	while (showedCards.length() != 0) {
		int k = showedCards.find(" ");
		int cardId = stoi(showedCards.substr(0, k));
		showedCards.erase(0, k + 1);
		possibleCards[cardId].chance = 1;
		counterShowedCards++;
	}
	double counterUnshowedCards = tb.playerCards.size() - counterShowedCards;
	double chance = counterUnshowedCards / (counterUnshowedCards + double(tb.deck.size()));
	for (int i = 0; i < 32; i++) {
		if (!tb.contains(tb.computerCards, i) && possibleCards[i].chance != 1) {
			possibleCards[i].chance = chance;
		}
	}
	vector<child> children;
	vector<table> tempChildren;
	for (int i = 0; i < tb.computerCards.size(); i++) {
		table temp = tb;
		temp.computerMove(i);
		tempChildren.push_back(temp);
	}
	for (int i = 0; i < tempChildren.size(); i++) {
		for (int j = 0; j < possibleCards.size(); j++) {
			if (possibleCards[j].chance != 0) {
				table temp = tempChildren[i];
				temp.playerPossibleMove(j);
				temp.moveComputerFirst();
				child tempChild;
				tempChild.childTable = temp;
				tempChild.chance = possibleCards[j].chance;
				children.push_back(tempChild);
			}
		}
	}
	return children;
}

//reset names on buttoms
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

void elfernGame::MyForm::hideButtons()
{
	for (int i = 0; i < 32; i++) {
		buttonsPlayer[i]->Visible = false;
		buttonsComputer[i]->Visible = false;
	}
}

bool elfernGame::MyForm::finishCheck()
{
	if (label5->Text == "16") {
		table tb = getTable();
		int computerOwners;
		int playerOwners;
		for (int i = 0; i < tb.computerCards.size(); i++) {
			if (tb.computerCards[i] >= 12)computerOwners++;
		}
		for (int i = 0; i < tb.playerCards.size(); i++) {
			if (tb.playerCards[i] >= 12)playerOwners++;
		}
		if (computerOwners == playerOwners) {
			status->BackColor = System::Drawing::Color::Yellow;
			status->Text = "Draw! Computer and player have 10 owners.";
		}
		else if (computerOwners > playerOwners) {
			status->BackColor = System::Drawing::Color::Red; 
			status->Text = "Not bad, but... Computer has won with " + Convert::ToString(computerOwners) + " owners";
		}
		else {
			status->BackColor = System::Drawing::Color::Green;
			status->Text = "Nice!You have won with " + Convert::ToString(playerOwners) + " owners";
		}
		resetNames();
		hideButtons();
		button68->Visible = true;
		label4->Visible = false;
		label5->Visible = false;
		label5->Text = "1";
		button67->Visible = false;
		label3->Visible = false;
		return true;
	}
	return false;
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
	enableButtons();
	button68->Visible = false;
	status->BackColor = System::Drawing::Color::White;
	status->Text = "Your move";
	button67->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;
	
}


