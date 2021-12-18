#pragma once
#include <vector>
#include <ctime>
using namespace std;

struct table {
	vector<int> deck;
	vector<int> playerCards;
	vector<int> computerCards;
	int playerCurrent;
	int computerCurrent;
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
};