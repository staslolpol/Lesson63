#pragma once
#include "main.h"


class BankAccount {
public:
	string name;
	int balance;
	string owner;

	string toString() {
		string s = "Bank Account:\n";
		s += "ID: " + name + "\n";
		s += "Balance: " + to_string(balance) + "\n";
		s += "Owner: " + owner + "\n";

		return s;
	}
};