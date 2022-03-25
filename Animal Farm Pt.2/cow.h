#ifndef COW_H
#define COW_H

#include <string>
#include <iostream>
#include "Animal.h"

class Cow : public Animal {
private:
	void gainWeight();
public:
	Cow() :Animal() {}
	Cow(string n, double w, double h) :Animal(n, w, h) {}
	void eat();
	void speak() { cout << "MOOOOOOO" << endl; }
	void getSpecies() { cout << "Cow";}
};
void Cow::gainWeight()
{
	setWeight(getWeight() + 5);
	cout << getName() << " gained 5 pounds." << endl;
}

inline void Cow::eat()
{
	cout << getName() << " the cow is eating.\n";
	gainWeight();
}


#endif

