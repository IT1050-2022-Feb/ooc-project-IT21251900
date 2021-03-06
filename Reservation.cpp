//R.V.R.N.U.Ranatunga - IT21249884 - Group 4.1 Group1 - Malabe Campus
//Implementation of the methods (Functions)
#include<iostream>
#include "Reservation.h"
#include "Payment.h"
#define SIZE 2;

using namespace std;

//Implementation of the default constructor - Assignning default values
Reservation:: Reservation(){
  reservationId = 0;
  checkInDate = 0;
  checkOutDate = 0;
  noOfGuests = 0;
  noOfNights = 0;
}

//Implementation of the overloading constructor
Reservation:: Reservation(int ReservationID, int CheckInDate, int CheckOutDate, int NoOfGuests, int NoOfNights){
  reservationId = ReservationID;
  checkInDate = CheckInDate;
  checkOutDate = CheckOutDate;
  noOfGuests = NoOfGuests;
  noOfNights = NoOfNights;

}
Reservation:: Reservation(int payment1, int payment2){
  for(int i=0;i<SIZE;i++){
    pay[0]=new payment(payment1);
    pay[1]=new payment(payment2);
  }
}
//Displaying the reservation details
void Reservation:: DisplayReservationDetails(){
  cout << "Reservation Id   :" << reservationId << endl;
  cout << "CheckInDate      :" << reservationId << endl;
  cout << "CheckOutDate     :" << reservationId << endl;
  cout << "Number Of guests :" << reservationId << endl;
  cout << "Number Of nights :" << reservationId << endl;

  for ( int i = 0 ; i < SIZE ; i++ )
   payment[i] -> DisplayPayment();
}

//Implementation of the destructor
Reservation:: ~Reservation(){
  cout << "Deleting the reservation..." << endl;

  for ( int i=0 ; i < SIZE ; i++)
    delete payment[i];
}

