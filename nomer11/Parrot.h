#ifndef PARROT_H
#define  PARROT_H
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
class Parrot : public Animal
{
public:
	bool ability_to_speak;
	Parrot();
	Parrot(string name, bool ability_to_speak);
	void Print();
};

#endif 