#include <cstring>
#include <iostream>

#include "Admin.h"
#include "Customer.h"
#include "Hotel.h"
#include "Reservation.h"
#include "siteSettings.h"

using namespace std;

int main() {
	// hotel objects

	Hotel *hotel;
	hotel = new Hotel();
	hotel->login();
	hotel->confirmReservation();
	hotel->addReview(Review * rev);
	hotel->cancelReservation();
	hotel->updateHotelDetails();
	hotel->DisplayHotelDetails();
	delete hotel;

	// creating objects
	Admin *a1;
	a1 = new Admin(1, "admin@gmail.com", "admin22", "password");
	SiteSettings *s1;
	s1 = new SiteSettings(1, 0777777777, "tugo@gmail.com", "no:21,address", a1);

	// displaying admin details
	cout << "Admin Details" << endl << endl;
	a1->DisplayAdminDetails();

	// displaying site details
	cout << endl << "Site Details" << endl << endl;
	s1->DisplaySiteDetails();

  //deleteing objects
  delete a1;
  delete s1;

	// Creating Reservation objects
	Reservation *R1;
	R1 = new Reservation();

	// Displaying reservation details
	cout << "Reservation Details.." << endl << endl;

	R1->DisplayReservationDetails();

	// sween

	customer *c;

	c = new customer(); // create a object;

	// method calling

	c->login();
	c->logout();
	c->cancelReservation();
	c->searchHotel();
	c->addReservation();
	c->addReview();
	c->updateProfileDetails();
	c->viewHotel();
	c->viewReservation();

	// delete object
	delete c;

	return 0;
}
