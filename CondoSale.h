#pragma once
#include <string>
#include "Property.h"
#include "ClientSeller.h"

class CondoSale:public Property
{
	int condo_fee;
public:
	CondoSale(std::string, int, int, int, int, ClientSeller*, RealEstateAgent*, Date);
	virtual void print();
	~CondoSale();
};

