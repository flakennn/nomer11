#include <iostream>
#include <string>
#include "Cat.h"
using namespace std;
Cat::Cat() : Animal()
{
	color = "white";
}
Cat::Cat(string name, string color) : Animal(name)
{
	this->color = color;
}
void Cat::Print()
{
	cout << "Cat" << endl;
	cout << "name: " << name << endl;
	cout << "color: " << color << endl;
};
