#pragma once
#include <string>
#include <iostream>
#include "Client.h"
#include "Property.h"

class ClientSeller:public Client
{
	Property* property_on_sale;
public:
	ClientSeller(std::string, Date, RealEstateAgent*, Property*);
	virtual void print();
	virtual void earnings();
	~ClientSeller();
};

