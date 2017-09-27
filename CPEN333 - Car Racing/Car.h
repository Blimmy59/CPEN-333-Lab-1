#ifndef CAR
#define CAR

#include <string>
#include "State.h"



class Car
{
public:
	Car(std::string model, double mass, double engine_force, double drag_area) {
		this->model = model;
		this->mass = mass;
		this->engine_force = engine_force;
		this->drag_area = drag_area;
	}

	std::string getModel();
	double getMass();
	void accelerate(bool on);
	virtual void drive(double dt);
	State getState();

private:
	std::string model;
	double mass;
	double engine_force;
	double wheel_force;
	double drag_area;
	State carState;
};
#endif // CAR