#include "BankAccount.h"

BankAccount* get_rich_owner(BankAccount** accounts) {
	int index = 0;

	for (int i = 1; i < 3; i++)
	{
		if (accounts[i]->balance > (*(accounts + index))->balance) {
			index = i;
		}
	}

	return accounts[index];
}

int main() {

	BankAccount* account01 = new BankAccount;
	BankAccount* account02 = new BankAccount;
	BankAccount* account03 = new BankAccount;

	BankAccount* accounts[]{account01, account02, account03 };


	account01->name = "11223AX";
	account01->balance = 1000;
	account01->owner = "Gleb";
			
	account02->name = "1123BY";
	account02->balance = 100;
	account02->owner = "Vlad";
			 
	account03->name = "1124QP";
	account03->balance = 10000;
	account03->owner = "Stas";

	BankAccount* account = get_rich_owner(accounts);

	cout << account->owner << " - " << account->balance << endl;

	return 0;
}