#pragma once
#include <iostream>
#include <string>
#include "Property.h"
#include "ClientSeller.h"

class HouseSale: public Property
{
	int total_land;
public:
	HouseSale(std::string, int, int, int, int, ClientSeller*, RealEstateAgent*, Date); // His prototype
	virtual void print(); // is fucked. He put five int's. What is the fifth for!!!@@@@@
	~HouseSale();
};

