#include <iostream>
using namespace std;

class BankAccount
{
private:
	double balance;
public:
	void setBalance(double balance)
	{
		this->balance = balance;
	}

	bool operator==(BankAccount second_account)
	{
		if (balance == second_account.balance) 
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
};

int main() 
{
	BankAccount account1, account2;
	double balance1, balance2;

	cout << "Enter balance 1: $";
	cin >> balance1;

	cout << "Etner balance 2: $";
	cin >> balance2;

	account1.setBalance(balance1);
	account1.setBalance(balance2);

	if (account1 == account2) 
	{
		cout << "Both accounts have the same balance." << endl;
	}
	else 
	{
		cout << "The account balances are different." << endl;
	}

	return 0;
}