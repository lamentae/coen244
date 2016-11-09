#include "RealEstateAgent.h"
#include <iostream>
// No need to include string here because its in the header.
using namespace std;

int RealEstateAgent::employee_id = 1; // Need to increment if this ends up being actually static. No clue yet.

RealEstateAgent::RealEstateAgent(string pname, Date bday, Date employdate, int earnings  ): Person(pname, bday) , employment_date(employdate)
{
	total_earnings = earnings; // Might not be good to put it here. To be determined.
}

void RealEstateAgent::print() {
	// Need to put something for employment date. and other stuff, perhaps include date class
	cout << employee_id; // and use its print function??
	cout << total_earnings;
}
void RealEstateAgent::earnings(){} // Don't know what to do with this yet!

RealEstateAgent::~RealEstateAgent()
{
}
