#pragma once
class Client
{
public:
	Client();
	int getWithdrawnMoney();
	void addWithdrawnMoney(int amount);
private:
	int withdrawnMoney;
};

