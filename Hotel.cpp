// IT21251900
// Rajapaksha R.M.S.D
// Malabe
// badge 4.1 G1

#include <iostream>
#include <cstring>
#include "Hotel.h"


Hotel::Hotel(){}

Hotel::Hotel(int PhotelID,char PhotelName[],char PhotelAddress[],int PhotelContact,char PhotelEmail[],int PpricePerNight,int PnumOfRooms,
char Pfacilities[],Customer *Pcust,Admin *Pad){
  
  hotelID=PhotelID;
	strcpy(hotelName,PhotelName);
	strcpy(hotelAddress,PhotelAddress);
	hotelContact=PhotelContact;
	strcpy(hotelEmail,PhotelEmail);
	pricePerNight=PpricePerNight;
	numOfRooms=PnumOfRooms;
	strcpy(facilities,Pfacilities);
	cust=Pcust;
	ad=Pad;

}

Hotel::Hotel(int ReservationID1, int CheckInDate1, int CheckOutDate1, int NoOfGuests1, int NoOfNights1,int ReservationID2, int CheckInDate2, int CheckOutDate2, int NoOfGuests2, int NoOfNights2)){

  res[0]=new Reservation(int ReservationID1, int CheckInDate1, int CheckOutDate1, int NoOfGuests1, int NoOfNights1);
  res[1]=new Reservation(int ReservationID2, int CheckInDate2, int CheckOutDate2, int NoOfGuests2, int NoOfNights2);
}

void Hotel::login(){

}
void Hotel:: confirmReservation(){

}
void Hotel::addReview(Review*rev){

}
void Hotel::cancelReservation(){

}
void Hotel::updateHotelDetails(){

}
void Hotel::DisplayHotelDetails(){

}

Hotel::~Hotel(){
for(int i=0;i<SIZE;i++){
delete res[i];
}
}