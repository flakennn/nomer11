#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
	string name;
	Animal();
	Animal(string name);
	virtual void Print() = 0;
};

#endif 