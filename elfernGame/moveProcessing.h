#pragma once
#include "table.h"
#include "card.h"
#include <string>
#include <vector>
using namespace std;

struct child {
	moveProcessing state;
	vector<card> path;
};

struct moveProcessing
{
	vector<card> playerHand;
	vector<card> computerHand;
	vector<card> showedCards;
	vector<card> deck;	
	int cardToMoveId;
	card playerCurrent;
	card computerCurrent;
	table tb;
	moveProcessing(table tb, string showedCards) {
		//initialize  computer hand
		for (int i = 0; i < tb.computerCards.size(); i++) {
			int value = tb.computerCards[i] / 4;
			int suit = tb.computerCards[i] % 4;
			card tempCard = card(value, suit);
			computerHand.push_back(tempCard);
		}
		//initialize player hand
		for (int i = 0; i < tb.playerCards.size(); i++) {
			int value = tb.playerCards[i] / 4;
			int suit = tb.playerCards[i] % 4;
			card tempCard = card(value, suit);
			playerHand.push_back(tempCard);
		}
		//player current
		int value = tb.playerCurrent / 4;
		int suit = tb.playerCurrent % 4;
		playerCurrent = card(value, suit);

		//deck
		for (int i = 0; i < tb.deck.size(); i++) {
			int value = tb.deck[i] / 4;
			int suit = tb.deck[i] % 4;
			card tempCard = card(value, suit);
			deck.push_back(tempCard);
		}
		//showedCards
		while (showedCards.length() != 0) {
			int k = showedCards.find(" ");
			int cardId = stoi(showedCards.substr(0, k));
			showedCards.erase(0, k + 1);
			int value = cardId / 4;
			int suit = cardId % 4;
			card tempCard = card(value, suit);
			this->showedCards.push_back(tempCard);
		}
		this->tb = tb;
	}
	

	vector<child>childrenFromPosition() {
		vector<child> children;
		table temp;
		if (computerCurrent.suit = -1) {
			for (int i = 0; i < computerHand.size();i++) {
				temp.move
			}
		}
		
	}


	int staticEvaluate() {
		return checkComputerOwners() - checkPlayerOwners();
	}


	int checkComputerOwners() {
		int temp = 0;
		for (int i = 0; i < computerHand.size(); i++) {
			if (computerHand[i].owner)temp++;
			if (computerHand[i].value > 5)temp++;
		}
		return temp;
	}
	int checkPlayerOwners() {
		int temp = 0;
		for (int i = 0; i < playerHand.size(); i++) {
			if (playerHand[i].owner)temp++;
			if (playerHand[i].value > 5)temp++;
		}
		return temp;
	}


	/*vector<int> kalahaGame::MyForm::minimax(child position, int depth, int alpha, int beta, bool maximizingPlayer)
	{
		if (depth == 0 || minimaxGameOverCheck(position)) {
			vector<int> temp;
			temp.push_back(staticEvaluation(position));
			return temp;
		}
		if (maximizingPlayer) {
			int maxEval = -100;
			vector<child>children = childrenFromPosition(position);
			int childPos = 0;
			for (int i = 0; i < children.size(); i++) {
				int eval = minimax(children[i], depth - 1, alpha, beta, false)[0];
				if (eval > maxEval) childPos = i;
				maxEval = max(maxEval, eval);
				alpha = max(alpha, eval);
				if (beta <= alpha) {
					break;
				}
			}
			vector<int> temp;
			temp.push_back(maxEval);
			temp.push_back(childPos);
			return temp;
		}
		else {
			int minEval = 100;
			vector<child>children = childrenFromPosition(position);
			int childPos = 0;
			for (int i = 0; i < children.size(); i++) {
				int eval = minimax(children[i], depth - 1, alpha, beta, true)[0];
				if (eval < minEval) childPos = i;
				minEval = min(minEval, eval);
				beta = min(beta, eval);
				if (beta <= alpha) {
					break;
				}
			}
			vector<int> temp;
			temp.push_back(minEval);
			temp.push_back(childPos);
			return temp;
		}
	}*/
};

