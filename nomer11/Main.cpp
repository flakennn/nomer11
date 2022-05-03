#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
using namespace std;
int main()
{
	Dog a("Sharick", "Alabai");
	a.Print();
	cout << endl;
	Cat b("Barsick", "Black");
	b.Print();
	cout << endl;
	Parrot c("Kesha", true);
	c.Print();
	cout << endl;
}