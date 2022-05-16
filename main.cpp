#include <iostream>
#include <cstring>

#include "Hotel.h"
#include "Admin.h"
#include "siteSettings.h"

using namespace std;

int main()
{
  // creating hotel objects
  Hotel *H1;
	H1 = new Hotel();

  // adding hotel details
	H1->AddHotelDetails(001,"Hotel Pinidiya","Welimada road, Bandarawela", 0573126222, "pinidiya@gmail.com", 20000 ,200,"Hot water, parking");

  // displaying hotel details
  cout << "Hotel Details" << endl
         << endl;
	H1->DisplayHotelDetails();

  // creating objects
    Admin *a1;
    a1 = new Admin();
    SiteSettings *s1;
    s1 = new SiteSettings();


    // adding admin details
    a1->AddAdminDetails(1, "admin@gmail.com", "admin22", "password");

    // adding site details
    s1->AddSiteDetails(1, 0777777777, "tugo@gmail.com", "no:21,address");

    // displaying admin details
    cout << "Admin Details" << endl
         << endl;
    a1->DisplayAdminDetails();

    // displaying site details
    cout << endl
         << "Site Details" << endl
         << endl;
    s1->DisplaySiteDetails();

  

	return 0;
}
