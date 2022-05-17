#include <iostream>
#include <cstring>

#include "Hotel.h"
#include "Admin.h"
#include "siteSettings.h"
#include "Reservation.h"
#include "Customer.h"

using namespace std;

int main()
{
  // creating hotel objects
  Hotel*hotel;
	hotel = new Hotel();
  hotel->Register(001,"Hotel Pinidiya","Welimada road, Bandarawela", 0573126222, "pinidiya@gmail.com", 20000 ,200,"Hot water, parking");
	hotel->DisplayHotelDetails();
  delete hotel;

  // creating objects
    Admin *a1;
    a1 = new Admin(1, "admin@gmail.com", "admin22", "password");
    SiteSettings *s1;
    s1 = new SiteSettings(1, 0777777777, "tugo@gmail.com", "no:21,address", a1);
  
    // displaying admin details
    cout << "Admin Details" << endl
         << endl;
    a1->DisplayAdminDetails();

    // displaying site details
    cout << endl
         << "Site Details" << endl
         << endl;
    s1->DisplaySiteDetails();

    //Creating Reservation objects
    Reservation * R1;
    R1 = new Reservation();
  
    //Adding reservation details
    R1 -> Reservation(001, 01/05/2022, 01/05/2022, 2, 2, oejfiejejejeoj , ififjjjejwf);
  
    //Displaying reservation details
    cout << "Reservation Details.." << endl << endl;
    
    R1 -> DisplayReservationDetails();





  //sween
  
customer*c;

c=new customer();          //create a object;

//method calling
  
c->login();
c->logout();
c->cancelReservation();
c->searchHotel();
c->addReservation();
c->addReview();
c->updateProfileDetails();
c->viewHotel();
c->viewReservation();

//delete object
delete c;


	return 0;
}











