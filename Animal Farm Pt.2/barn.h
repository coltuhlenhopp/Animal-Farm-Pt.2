#ifndef BARN_H
#define BARN_H

#include <iostream>
#include <vector>
#include <string>
#include "Animal.h"
#include "chicken.h"
#include "cow.h"
#include "horse.h"


class Barn {
private:
	Animal * myAnimals[15];
	int count;

	void stockBarn();
public:
	Barn() { count = 0; stockBarn(); }
	void feedAnimals();
	void showAll();

	~Barn();
};
void Barn::showAll() {
	// Display everything inside of the barn
	for (int i = 0; i < count; i++) {

	}
}
void Barn::stockBarn() {
	// fill the animal vector
	myAnimals[count++] = new Chicken("Mickey", 1.2, 3.4);
	myAnimals[count++] = new Cow("Babe", 2100, 40);
	myAnimals[count++] = new Horse("Joe", 2300, 50);
	myAnimals[count++] = new Chicken("Hank", 2, 4);
	myAnimals[count++] = new Cow("Pete", 2300, 43);
	myAnimals[count++] = new Horse("Kirby", 1900, 37);
	myAnimals[count++] = new Chicken("Barry", 7, 16);
}
void Barn::feedAnimals() {
	// display info about animals in the vector
	for (int i = 0; i < count; i++) {
		myAnimals[i]->speak();
		myAnimals[i]->eat();
		cout << myAnimals[i]->getName() << " now weighs " << myAnimals[i]->getWeight() << " pounds."<<endl;
		cout << endl;
	}

}
// Destructor
inline Barn::~Barn()
{
	for (int i = 0; i < count; i++) {
		delete myAnimals[i];
	}
}

#endif

