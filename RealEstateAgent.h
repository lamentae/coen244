#pragma once
#include <string>
#include "Person.h"

class RealEstateAgent:public Person
{
	Date employment_date;
	static int employee_id; // should this be a static int??? I'll make it so.
	int total_earnings; // if not static, then what else could it be? only one int in constructor.
public:
	RealEstateAgent(std::string, Date, Date, int); // string comes from the name data member in class person
	virtual void print(); // first Date is birthdate from class person, second is employment date.
	virtual void earnings();
	~RealEstateAgent();
};

