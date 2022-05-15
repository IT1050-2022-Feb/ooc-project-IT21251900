#include <iostream>
#include <cstring>
#include "Hotel.h"
using namespace std;

Hotel::Hotel(){
  
};

void Hotel::AddHotelDetails(int HotelID,char HotelName[50], char HotelAddress[256], int HotelContact, char HotelEmail[256], int PricePerNight ,int NumOfRooms, char Facilities[1000]){
  hotelID = HotelID;
  strcpy(hotelName, HotelName);
  strcpy(hotelAddress, HotelAddress);
  hotelContact = HotelContact;
  strcpy(hotelEmail, HotelEmail);
  pricePerNight = PricePerNight;
  numOfRooms = NumOfRooms;
  strcpy(facilities,Facilities);
};

void Hotel::DisplayHotelDetails() {
	cout << "Hotel ID is            : " << hotelID << endl;
	cout << "Hotel Name is          : " << hotelName << endl;
	cout << "Hotel Address is       : " << hotelAddress << endl;
	cout << "Hotel Contact number is: " << hotelContact << endl;
  cout << "Hotel Email is         : " << hotelEmail << endl;
  cout << "Price Per Night is     : " << hotelEmail << endl;
  cout << "Number of rooms are    : " << hotelEmail << endl;
  cout << "Hotel facilities are   : " << hotelEmail << endl;
  cout << "" << endl;
};

Hotel::~Hotel()
{
	cout << " " << endl << endl;
};