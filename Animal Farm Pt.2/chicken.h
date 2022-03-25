#ifndef CHICKEN_H
#define CHICKEN_H

#include <string>
#include <iostream>
#include "Animal.h"

class Chicken : public Animal {
private:
	void gainWeight() {
		setWeight(getWeight() + 1.25);
		cout << getName() << " gained 1.25 pounds." << endl;
	}
public:
	Chicken() :Animal() {}
	Chicken(string n, double h, double w) :Animal(n, h, w) {}
	void eat();
	void speak() { cout << "CLUCK.....CLUCK" << endl; }
	void getSpecies() { cout << "Chicken"; }

};
void Chicken::eat() {
	cout << getName() << " the chicken is eating.\n";
	gainWeight();
}

#endif


