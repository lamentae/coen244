#include "ClientSeller.h"

using namespace std;

ClientSeller::ClientSeller(string pname, Date bday, RealEstateAgent* ptr, Property* ptr2): Client(pname,bday,ptr), property_on_sale(ptr2)
{
	// Again, there is a potential problem with the way I'm assigning values to pointers. Need to look this over.
}

void ClientSeller::print() {};

void ClientSeller::earnings() {};

ClientSeller::~ClientSeller()
{
}
