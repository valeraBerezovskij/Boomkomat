#include "Bankomat.h"

unsigned int Bankomat::count = 0;

Bankomat::Bankomat()
	: balance_(100'000), min(10), max(10'000), id(++count), minUser(0), maxUser(100'000)
{ }

void Bankomat::replenishment(int amount) {
	if(amount % 10 != 0){ // because of nomenals
		std::cerr << "Invalid amount.\n"; return;
	}
	balance_ += amount;
}

void Bankomat::withdraw(int amount, Client& user) {
	if (amount < min || amount > max || amount % 10 != 0) {
		std::cerr << "Invalid amount.\n"; return;
	}
	if (user.getWithdrawnMoney() > maxUser) {
		std::cerr << "Limit exceeded.\n"; return;
	}
	balance_ -= amount;
	user.addWithdrawnMoney(amount);
}

const char* Bankomat::toString() {
	return std::to_string(balance_).c_str();
}
