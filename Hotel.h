// IT21251900
// Rajapaksha R.M.S.D
// Malabe
// badge 4.1 G1
#include"Admin.h"
#include"Customer.h"
#include"Reservation.h"
#include"Review.h"


class Hotel {
private:
	int hotelID;
	char hotelName[50];
	char hotelAddress[256];
	int hotelContact;
	char hotelEmail[256];
	int pricePerNight;
	int numOfRooms;
	char facilities[1000];
	customer *cust;
	Reservation *res[SIZE];
	Admin *ad;

public:
	Hotel();

	void Register(
		int HotelID,
		char HotelName[50],
		char HotelAddress[256],
		int HotelContact,
		char HotelEmail[256],
		int PricePerNight,
		int NumOfRooms,
		char Facilities[1000]);
	void login();
	void confirmReservation();
	void cancelReservation();
	void viewReviews(Review *R);
	void updateHotelDetails();
	void DisplayHotelDetails();

	~Hotel();
};