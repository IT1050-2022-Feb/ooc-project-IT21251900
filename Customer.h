#include"Hotel.h"
#include"Reservation.h"
#include"Admin.h"
#include"Review.h"
#define SIZE 10;

class customer{
private:
  int custID;
  char custName[10];
  char custEmail[10];
  int custContact;
  char custPassword;
  int noOfReviews;
  int noOfReservations;
  Hotel*hotel[SIZE];
  Review*rev[SIZE];
  Admin*ad;
  Reservation*res[SIZE];


public:
  customer();
  customer(int cID,char cName[],char ctEmail[],int cContact,char cPassword[],Admin*Pad,Hotel*Phot[SIZE],int PnoOfReviews,int         
PnoOfReservations);
    void addReview(Review*Prev);
    void addReservation(Reservation*Pres);
    void login();
    void viewHotel();
    void searchHotel();
    void logout();
    void viewReservation();
    void cancelReservation();
    void updateProfileDetails();
    ~customer();

}