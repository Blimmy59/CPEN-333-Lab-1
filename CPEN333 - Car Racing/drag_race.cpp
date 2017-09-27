// OBJECT-ORIENTED CAR SIMULATOR
#include <iostream>
#include <string>
#include "State.h"
#include "Car.h"

int main() {

	Car car1("Mazda 3", 1600, 790, 0.61);
	Car car2("Toyota Prius", 1450, 740, 0.58);

	// drive for 60 seconds
	double dt = .1;

	// GO!!!!
	car1.accelerate(true);
	car2.accelerate(true);
	while ((car1.getState().position < 402.3) || (car2.getState().position < 402.3)) {
		car1.drive(dt);
		car2.drive(dt);
		// TODO: print out who's in the lead
		std::cout << car1.getModel() << ": \n" << car1.getState() << "\n \n" << car2.getModel() << ": \n" << car2.getState()<< "\n" << std::endl;
		
	}
	std::cin.get();
	return 0;
}