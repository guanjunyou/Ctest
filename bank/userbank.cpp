#include<iostream>
#include"bank.h"
#include<string>
using namespace std;
int main()

{
	typedef long long Item;
	Bank Account;
	int flag = 1;
	while (flag)
	{
		cout << "Welcome to our bank!\n";
		cout << "Please enter :\n"
			<<"A to creat an account,\n";
		cout << "B to deposit,\n"
			<< "C to withdraw,\n"
			<< "D to Check your balance,\n"
			<< "Q to quit.\n";
		char a;
		cin >> a;
		cout << "----------------------------------------\n";
		switch (a) {
		case 'A': {
			string Name; Item UserNum; Item PassWord;
			cout << "Please enter your Name:\n:";
			cin >> Name;
			cout << "Please enter your username:\n";
			cin >> UserNum;
			cout << "Please enter your password:\n";
			cin >> PassWord;
			Account.init(Name, UserNum, PassWord);
			std::cout << "An new account has been created!\n";
			break; }
		case 'B': {
			string Name; Item UserNum; Item PassWord; double num;
			do {
				cout << "Please enter your Name:\n:";
				cin >> Name;
				cout << "Please enter your username:\n";
				cin >> UserNum;
				cout << "please enter an number of money that you want to deposit:\n";
				cin >> num;
			} while (!Account.deposit(Name, num, UserNum));
			cout << "Desposited!\n";
			break; }
		case 'C': {
			string Name; Item UserNum; Item PassWord; double num;
			do {
				cout << "Please enter your Name:\n:";
				cin >> Name;
				cout << "Please enter your username:\n";
				cin >> UserNum;
				cout << "Please enter your password:\n";
				cin >> PassWord;
				cout << "please enter an number of money that you want to withdraw:\n";
				cin >> num;
			} while (!Account.withdrawal(Name, num, UserNum, PassWord));
			break; }
		case 'D': {
			string Name; Item UserNum; Item PassWord; double num;
			do
			{
				cout << "Please enter your Name:\n:";
				cin >> Name;
				cout << "Please enter your username:\n";
				cin >> UserNum;
				cout << "Please enter your password:\n";
				cin >> PassWord;
			} while (!Account.show(Name, UserNum, PassWord));
			break; }
		case 'Q': {
			cout << "Bye~";
			flag = 0;
			break; }
		default: {
			cout << "Please enter again:\n"; }
		}
	}
	return 0;
}