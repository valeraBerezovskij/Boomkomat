#pragma once
#include<iostream>
class Wheels
{
protected:
	double radius;
	bool _isWinter;
public:
	Wheels(double r = 50, bool _isWinter = false) : radius(r), _isWinter(_isWinter) { }
	Wheels() = default;

	bool isWinter() const { return _isWinter; }
	double getRadius() const { return radius; }
	
	void show() const {
		std::cout << "Radius: " << radius << std::endl;
		std::cout << "Is winter: " << _isWinter << std::endl;
	}
};

