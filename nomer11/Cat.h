#ifndef CAT_H
#define CAT_H
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
class Cat : public Animal
{
public:
	string color;
	Cat();
	Cat(string name, string color);
	void Print();
};

#endif 
