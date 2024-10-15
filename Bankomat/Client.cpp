#include "Client.h"

Client::Client():withdrawnMoney(0){}

int Client::getWithdrawnMoney() {
	return withdrawnMoney;
}

void Client::addWithdrawnMoney(int amount) {
	withdrawnMoney += amount;
}
