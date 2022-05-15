#include <iostream>
#include <cstring>

#include "Hotel.h"

using namespace std;

int main()
{
  Hotel *H1;
	H1 = new Hotel();

	H1->AddHotelDetails(001,"Hotel Pinidiya","Welimada road, Bandarawela", 0573126222, "pinidiya@gmail.com", 20000 ,200,"Hot water, parking");
	H1->DisplayHotelDetails();
	H1->~Hotel();

	delete H1;

	return 0;
}
