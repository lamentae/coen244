#pragma once
#include <iostream>
#include <string>
#include "ClientBuyer.h" // might be something messed up with the includes, they are looking good so far...

#include "RealEstateAgent.h"
#include "Date.h" // Added a bunch to be safe.

class ClientSeller;
class Property
{
private:
	std::string street_address;
	int year_of_built;
	int no_of_rooms;
	int price;
	bool property_solded;
	ClientSeller* landlord;
	RealEstateAgent* seller_agent;
	Date listing_date;
	ClientBuyer* buyer_client;
public:
	Property(std::string, int, int, int, ClientSeller*, RealEstateAgent*, Date);
	virtual void print();
	virtual void property_sold(ClientBuyer*); // Not sure about void return type. Not specified in Assignment
	~Property();
};

