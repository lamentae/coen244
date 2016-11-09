#include "HouseSale.h"

using namespace std;

HouseSale::HouseSale(string address, int ybuilt, int nbroom, int cost, int totland, ClientSeller* ptr, RealEstateAgent* ptr2, Date listingdate): total_land(totland), Property(address, ybuilt,nbroom,cost,ptr,ptr2,listingdate)
{
}

void HouseSale::print() {}

HouseSale::~HouseSale()
{
}
