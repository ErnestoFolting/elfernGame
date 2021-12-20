#pragma once
struct card {
	int value;  //7 - 0 tuz -  7
	int suit; //0 - hresta 3 - pika
	bool owner;
	card(int val, int su) {
		value = val;
		suit = su;
		if (value >= 3) {
			owner = true;
		}
	}
};