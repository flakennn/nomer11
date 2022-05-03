#include <iostream>
#include <string>
#include "Dog.h"
using namespace std;
Dog::Dog() : Animal()
{
	breed = "jack russell";
}
Dog::Dog(string name, string breed) : Animal(name)
{
	this->breed = breed;
}
void Dog::Print()
{
	cout << "Dog" << endl;
	cout << "name: " << name << endl;
	cout << "breed: " << breed << endl;
};
