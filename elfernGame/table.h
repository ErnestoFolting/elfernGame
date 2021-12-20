#pragma once
#include <vector>
#include <ctime>
#include <algorithm> 
using namespace std;


struct table {
	vector<int> deck;
	vector<int> playerCards;
	vector<int> computerCards;
	int playerCurrent = -1;
	int computerCurrent = -1;
	table() {
		for (int i = 0; i < 32; i++) {
			bool flag = false;
			while (!flag) {
				int temp = rand() % 32;
				if (!contains(deck, temp)) {
					deck.push_back(temp);
					flag = true;
				}
			}
		}
	}
	bool contains(vector<int> vec,int num) {
		bool flag = false;
		for (int i = 0; i < vec.size(); i++) {
			if (vec[i] == num) {
				flag = true;
			}
		}
		return flag;
	}
	void start() {
		for (int i = 0; i < 6; i++) {
			playerCards.push_back(deck.back());
			deck.pop_back();
			computerCards.push_back(deck.back());
			deck.pop_back();
		}
	}
	void removeFromPlayerHand(int cardId) {
		vector<int> temp;
		for (int i = 0; i < playerCards.size(); i++) {
			if (playerCards[i] != cardId) {
				temp.push_back(playerCards[i]);
			}
		}
		playerCards = temp;
	}
	void removeFromComputerHand(int cardId) {
		vector<int> temp;
		for (int i = 0; i < computerCards.size(); i++) {
			if (computerCards[i] != cardId) {
				temp.push_back(computerCards[i]);
			}
		}
		computerCards = temp;
	}
	void playerMove(int cardId) {
		playerCurrent = playerCards[cardId];
		removeFromPlayerHand(playerCards[cardId]);
	}
	void playerPossibleMove(int cardId) {
		playerCurrent = cardId;
		removeFromPlayerHand(cardId);
	}
	void computerAnswer() {
		vector<int>equalSuits;
		bool flag = false;
		for (int i = 0; i < computerCards.size(); i++) {
			if (computerCards[i] % 4 == playerCurrent % 4) {
				equalSuits.push_back(computerCards[i]);
				flag = true;
			}
		}
		if (flag) {
			computerCurrent = *min_element(equalSuits.begin(),equalSuits.end());
			removeFromComputerHand(computerCurrent);
		}
		else {
			computerCurrent = *min_element(computerCards.begin(), computerCards.end());
			removeFromComputerHand(computerCurrent);
		}
	}
	void computerMove(int cardIdToMove) {
		computerCurrent = computerCards[cardIdToMove];
		removeFromComputerHand(computerCards[cardIdToMove]);
	}

	//Look at table and give 2 cards to winner of draw after player first
	bool movePlayerFirst() {
		bool flag = false;
		int valuePlayer = (playerCurrent) / 4;
		int valueComputer = (computerCurrent) / 4;
		int suitPlayer = playerCurrent % 4;
		int suitComputer = computerCurrent % 4;
		if (suitPlayer == suitComputer) {
			if (valuePlayer >= valueComputer) {
				playerCards.push_back(computerCurrent);
				playerCards.push_back(playerCurrent);
				flag = true;
			}
			else {
				computerCards.push_back(playerCurrent);
				computerCards.push_back(computerCurrent);
			}
		}
		else {
			playerCards.push_back(computerCurrent);
			playerCards.push_back(playerCurrent);
			flag = true;
		}
		
		playerCurrent = -1;
		computerCurrent = -1;
		return flag;
	}

	//Look at table and give 2 cards to winner of draw after computer first
	bool moveComputerFirst() {
		bool flag = false;
		int valuePlayer = (playerCurrent) / 4;
		int valueComputer = (computerCurrent) / 4;
		int suitPlayer = playerCurrent % 4;
		int suitComputer = computerCurrent % 4;
		if (suitPlayer == suitComputer) {
			if (valuePlayer > valueComputer) {
				playerCards.push_back(computerCurrent);
				playerCards.push_back(playerCurrent);
				flag = true;
			}
			else {
				computerCards.push_back(playerCurrent);
				computerCards.push_back(computerCurrent);
			}
		}
		else {
			computerCards.push_back(playerCurrent);
			computerCards.push_back(computerCurrent);
		}
		playerCurrent = -1;
		computerCurrent = -1;
		return flag;
	}

	void removeFromDeck(int cardId) {
		vector<int> temp;
		for (int i = 0; i < deck.size(); i++) {
			if (deck[i] != cardId) {
				temp.push_back(deck[i]);
			}
		}
		deck = temp;
	}
	void giveCardsAfterPlayerMove() {
		random_shuffle(deck.begin(), deck.end());
		if (deck.size() != 0) {
			playerCards.push_back(deck.back());
			deck.pop_back();
		}
		if (deck.size() != 0) {
			computerCards.push_back(deck.back());
			deck.pop_back();
		}
	}
	void giveCardsAfterComputerMove() {
		random_shuffle(deck.begin(), deck.end());
		if (deck.size() != 0) {
			computerCards.push_back(deck.back());
			deck.pop_back();
		}
		if (deck.size() != 0) {
			playerCards.push_back(deck.back());
			deck.pop_back();
		}
	}

	
	//--------------------------------------------

	int checkComputerOwners() {
		int temp = 0;
		for (int i = 0; i < computerCards.size(); i++) {
			if (computerCards[i] >= 12)temp++;
			if (computerCards[i] >= 24)temp++;
		}
		return temp;
	}
	int checkPlayerOwners() {
		int temp = 0;
		for (int i = 0; i < playerCards.size(); i++) {
			if (playerCards[i] >= 12)temp++;
			if (playerCards[i] >= 24)temp++;
		}
		return temp;
	}
	int staticEvaluate() {
		return checkComputerOwners() - checkPlayerOwners();
	}

};