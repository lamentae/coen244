#include "CondoSale.h"

using namespace std;

CondoSale::CondoSale(string address, int ybuilt, int nbroom, int cost, int fee, ClientSeller* ptr, RealEstateAgent* ptr2, Date listingdate) : condo_fee(fee), Property(address, ybuilt, nbroom, cost, ptr, ptr2, listingdate)
{
}

void CondoSale::print(){}

CondoSale::~CondoSale()
{
}
