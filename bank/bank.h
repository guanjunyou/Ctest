#ifndef BANK_H_
#define BANK_H_
#include<string>

class Bank
{
private:
	std::string user;
	long long username;
	long long password;
	double money;
public:
	bool deposit(std::string & name,double num,long long UserNum);//���
	bool withdrawal(std::string & name,double num, long long UserNum, long long pass);//ȡ��
	bool show(std::string & name, long long UserNum, long long pass);
	void init(std::string & name, long long UserNum, long long pass);
};
#endif // !BANK_H_
#pragma once
