#ifndef HORSE_H
#define HORSE_H

#include <string>
#include <iostream>
#include "Animal.h"

class Horse : public Animal {
private:
	void gainWeight();
public:
	Horse() :Animal() {}
	Horse(string n, double w, double h) :Animal(n, w, h) {}
	void eat();
	void speak() { cout << "Neeeeeiiiiiiiiiiggghhhhhhh" << endl; }
	void getSpecies() { cout << "Horse"; }
};
void Horse::gainWeight()
{
	setWeight(getWeight() + 6);
	cout << getName() << " gained 6 pounds." << endl;
}

inline void Horse::eat()
{
	cout << getName() << " the horse is eating.\n";
	gainWeight();
}


#endif

