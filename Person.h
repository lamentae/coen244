#pragma once
#include <string>
#include "Date.h"

class Person // This is an abstract class. An object of this class can't be initialized
{
	std::string name;
	Date birthdate;
public:
	Person(std::string, Date);
	virtual void print();
	virtual void earnings() = 0;
	~Person();
};

