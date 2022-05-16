#include"Customer.h"
#include<cstring>

customer::customer(){}
customer::customer(int cID,char cName[],char ctEmail[],int cContact,char cPassword[],Admin*Pad,Hotel*Phot[SIZE],int PnoOfReviews,int PnoOfReservations){
  custID=cID;
  strcpy(custName,cName);
  strcpy(custEmail,ctEmail);
  custContact=cContact;
  noOfReviews=PnoOfReviews;
  noOfReservations=PnoOfReservations;
  ad=Pad;
  for(int i=0;i<SIZE;i++){
    hot[i]=Phot[i];
  }
  
}
void customer:: addReview(Review*Prev){
  if(noOfReviews<SIZE){
    rev[noOfReviews]=Prev;
    noOfReviews++;
  }
}
void customer::addReservation(Reservation*Pres){
  if(noOfReservations<SIZE){
    rev[noOfReservations]=Pres;
    noOfReviews++;
  }
}
void customer::login(){
  
}
void customer::viewHotel(){
  
}
void customer::searchHotel(){
  
}
void customer::logout(){
  
}
void customer::viewReservation(){
  
}
void customer::cancelReservation(){
  
}
void customer::updateProfileDetails(){
  
}
customer::~customer(){
  
}