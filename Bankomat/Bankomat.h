#pragma once
#include<iostream>
#include<string>
#include"Client.h"

class Bankomat
{
public:
	Bankomat();
	void replenishment(int amount);
	void withdraw(int amount, Client& user);
	int balance() { return balance_; }
	int getId() { return id; }
	const char* toString();
private:
	static unsigned int count;
	int id;
	int balance_;

	int min;
	int max;

	int minUser;
	int maxUser;
};

