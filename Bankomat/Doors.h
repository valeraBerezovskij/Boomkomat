#pragma once
#include<iostream>
class Doors
{
protected:
	double weight;
public:
	Doors(double w) : weight(w) {}
	Doors() = default;

	double getWeight() const { return weight; }

	void show() const {
		std::cout << "weight: " << weight << std::endl;
	}
};

