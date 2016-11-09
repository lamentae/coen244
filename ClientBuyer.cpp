#include "ClientBuyer.h"
#include <iostream>


using namespace std;

ClientBuyer::ClientBuyer(string pname, Date bday, RealEstateAgent* ptr, string buildtype, int costmax ): Client(pname,bday,ptr), max_cost(costmax)
{
	building_type = buildtype;
}

void ClientBuyer::print() {};

void ClientBuyer::earnings() {};

ClientBuyer::~ClientBuyer()
{
}
