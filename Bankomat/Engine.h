#pragma once
#include<iostream>
#include<string>

class Engine
{
protected:
	std::string fuel;
public:
	Engine(std::string fuelType) : fuel(fuelType) {}
	Engine() = default;

	std::string fuelType()  const { return fuel; }

	void show() const {
		std::cout << "fuel: " << fuel << std::endl;
	}
};

