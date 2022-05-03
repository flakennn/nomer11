#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;
Animal::Animal()
{
	name = "bobick";
}
Animal::Animal(string name)
{
	this->name = name;
}
