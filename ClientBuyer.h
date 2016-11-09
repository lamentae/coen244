#pragma once
#include <string>
#include "Client.h"

class ClientBuyer:public Client
{
	std::string building_type; //house or condo
	int max_cost; // max amount that buyer is willing to pay.
public:
	ClientBuyer(std::string, Date, RealEstateAgent*,std::string,int);
	virtual void print();
	virtual void earnings();
	~ClientBuyer();
};

