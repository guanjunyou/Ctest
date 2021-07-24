#include<iostream>
#include"bank.h"
typedef long long LL;
void Bank::init(std::string & name,LL UserNum,LL pass)
{
	user = name;
	username = UserNum;
	password = pass;
	money = 0.0;
}
bool Bank::deposit(std::string & name,double num,LL UserName)
{
	if (UserName != username) {
		std::cout << "This username is not vaild! Please enter again!:\n";
		return false;
	}
	money += num;
	return true;
}
bool Bank::withdrawal(std::string & name, double num, LL UserNum, LL pass)
{
	if (UserNum != username) {
		std::cout << "This username is not vaild! Please enter again!:\n";
		return false;
	}
	else if (UserNum == username && pass != password) {
		std::cout << "Sorry!Your password is not correct!Please enter again!\n"<<"\n";
		return false;
	}
	else
	{
		while (money < num) {
			std::cout << "Your account balance is insufficient!"
				<< " Please enter again:\n";
			std::cin >> num;
		}
		money -= num;
		std::cout << "OK!\n";
		return true;
	}
}
bool Bank::show(std::string & name, LL UserNum, LL pass)
{
	if (UserNum != username) {
		std::cout << "This username is not vaild! Please enter again!\n";
		return false;
	}
	else if (UserNum == username && pass != password) {
		std::cout << "Sorry!Your password is not correct!Please enter again!\n";
		return false;
	}
	else
	{
		std::cout << "-----------------------------------------------------\n";
		std::cout << "Account:" << name <<std:: endl;
		std::cout << "Username:" << username << "\n";
		std::cout << "Balance:" << money << "\n";
		std::cout << "-----------------------------------------------------\n";
	}
}