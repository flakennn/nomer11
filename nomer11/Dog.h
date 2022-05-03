#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
class Dog : public Animal
{
public:
	string breed;
	Dog();
	Dog(string name, string breed);
	void Print();
};

#endif 
