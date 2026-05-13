#include "BankAccount.h"

int main() {
	
	BankAccount account01;
	BankAccount account02;
	BankAccount account03;

	BankAccount accounts[]{ account01, account02, account03 };

	account01.name = "11223AX";
	account01.balance = 1000;
	account01.owner = "Gleb";

	account02.name = "1123BY";
	account02.balance = 100;
	account02.owner = "Vlad";

	account03.name = "1124QP";
	account03.balance = 10000;
	account03.owner = "Stas";


	return 0;
}