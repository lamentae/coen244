#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string pname, Date bday ): birthdate(bday)
{
	name = pname;
}

void Person::print() {} // Just a virtual function. No need to define it.

// Earnings function not defined here because it has already been defined in the header file.

Person::~Person()
{
}
