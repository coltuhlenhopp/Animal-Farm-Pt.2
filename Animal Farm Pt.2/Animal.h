#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;


class Animal {
private:
	string name;
	double weight, height;
public:
	Animal();
	Animal(string, double, double);
	string getName()const { return name; }
	double getWeight()const { return weight; }
	double getHeight()const { return height; }
	void setWeight(double);
	void setName(string);
	void setHeight(double);
	virtual void eat();
	virtual void speak();
	virtual void gainWeight();
	virtual void getSpecies();

};
Animal::Animal() : name(""), weight(0.0), height(0.0)
{
}

inline Animal::Animal(string n, double w, double h)
{
	name = n;
	weight = w;
	height = h;
}

inline void Animal::setWeight(double weight)
{
	this->weight = weight;
}

inline void Animal::setName(string name)
{
	this->name = name;
}

inline void Animal::setHeight(double height)
{
	this->height = height;
}

inline void Animal::eat()
{
	cout << name << " the animal is eating now." << endl;
	gainWeight();

}

inline void Animal::speak()
{
	cout << name << " makes a noise." << endl;
}

inline void Animal::gainWeight()
{
	weight += 5;
}

inline void Animal::getSpecies()
{
	cout << name << " is an animal" << endl;
}



#endif
