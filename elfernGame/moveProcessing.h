#pragma once
#include "table.h"
#include "card.h"
#include <string>
using namespace std;
using namespace std;
struct moveProcessing
{
	int i;
	table tb;
	string showedCards;
	moveProcessing(table tb, string showedCards) {
		this->tb = tb;
		this->showedCards = showedCards;
	}
};

