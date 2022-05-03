#include <iostream>
#include <string>
#include "Parrot.h"
using namespace std;
Parrot::Parrot() : Animal()
{
	ability_to_speak = true;
}
Parrot::Parrot(string name, bool ability_to_speak) : Animal(name)
{
	this->ability_to_speak = ability_to_speak;
}
void Parrot::Print()
{
	cout << "Parrot" << endl;
	cout << "name: " << name << endl;
	cout << "ability_to_speak: " << ability_to_speak << endl;
};
