// IT21251900
// Rajapaksha R.M.S.D
// Malabe
// badge 4.1 G1
#include"Admin.h"
#include"Customer.h"
#include"Reservation.h"
#include"Review.h"
#define SIZE 2

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
	Customer *cust;
	Reservation *res[SIZE];
	Admin *ad;

public:
	Hotel();

  Hotel(int PhotelID,char PhotelName[],char PhotelAddress[],int PhotelContact,char PhotelEmail[],int PpricePerNight,int PnumOfRooms,
char Pfacilities[],Customer *Pcust,Admin *Pad);

Hotel(int ReservationID1, int CheckInDate1, int CheckOutDate1, int NoOfGuests1, int NoOfNights1,int ReservationID2, int CheckInDate2, int CheckOutDate2, int NoOfGuests2, int NoOfNights2));

  void addReview(Review * rev);
	void login();
	void confirmReservation();
  void addReview(Review*rev);
	void cancelReservation();
	void updateHotelDetails();
	void DisplayHotelDetails();

	~Hotel();
};