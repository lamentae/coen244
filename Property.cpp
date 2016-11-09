#include "Property.h"

using namespace std;

Property::Property(string address, int ybuilt, int nbroom, int cost, ClientSeller* ptr, RealEstateAgent* ptr2, Date listingdate ): year_of_built(ybuilt), no_of_rooms(nbroom), price(cost), landlord(ptr), seller_agent(ptr2), listing_date(listingdate)
{
	street_address = address;
}

void Property::print() {}

void Property::property_sold(ClientBuyer* ptr) {}

Property::~Property()
{
}
