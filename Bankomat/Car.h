#pragma once
#include"Engine.h"
#include"Doors.h"
#include"Wheels.h"
class Car
	: public Engine,
	  public Doors,
	  public Wheels
{
private:

public:
	Car(std::string fuelType, double w, double r = 50, bool isWinter = false)
		: Engine(fuelType), Doors(w), Wheels(r, isWinter) { }
	Car() = default;
	void show() const {
		Engine::show();
		Doors::show();
		Wheels::show();
	}
};

