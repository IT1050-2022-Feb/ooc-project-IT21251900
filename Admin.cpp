/*
IT21251214 - Manathunga A.U.U
Group 4.1 G1
Malabe
*/
#include "Admin.h"
#include <iostream>
#include <cstring>
using namespace std;

Admin::Admin(){
  
}


Admin::Admin(int pID, const char pEmail[], const char pUsername[], const char pPassword[])
{
    adminID = pID;
    strcpy(adminEmail, pEmail);
    strcpy(userName, pUsername);
    strcpy(adminPassword, pPassword);
}

void Admin::DisplayAdminDetails()
{
    cout << "Admin ID : " << adminID << endl
         << "Admin email : " << adminEmail << endl
         << "Username : " << userName << endl
         << "Password : " << adminPassword << endl;
}

void Admin::login(){
  
}

void Admin::manageCustomers(){
  
}

void Admin::manageHotels(){
  
}
Admin::~Admin(){
  
}