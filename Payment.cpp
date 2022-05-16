#include "Payment.h"
#include <iostream>
#include <cstring>
using namespace std;

Payment::Payment(){
  
}
void Payment::addPaymentDetails(int p_ID, const char p_type[], int p_amount){
  paymentID = p_ID;
  strcpy(paymentType,p_type);
  paymentAmount = p_amount;
}
void Payment::displayPaymentDetails(){
   cout << "Payment ID : " << paymentID << endl
        << "Payment Type : " << paymentType<< endl
        << "Payment Amiunt: " << paymentAmount << endl;        
}
