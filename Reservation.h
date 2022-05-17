//R.V.R.N.U.Ranatunga - IT21249884 - Group 4.1 Group1 - Malabe Campus
//Creating "Reservation Class"

#include "Payment.h"
#define SIZE 2;

class Reservation{
  protected:
    int reservationId;

  private:
    int checkInDate;
    int checkOutDate;
    int noOfGuests;
    int price;
    int noOfNights;

    //Composition relationship with "Payment class"
    Payment *pay[SIZE];

  public:
    Reservation();  //Default Constructor
    Reservation:: Reservation(int ReservationID, int CheckInDate, int CheckOutDate, int NoOfGuests, int NoOfNights, int payment1, int payment2); //Overloading Constructor
    void DisplayReservationDetails();
    ~Reservation();
};