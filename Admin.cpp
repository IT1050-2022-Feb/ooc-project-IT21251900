#include "Admin.h"
#include <iostream>
#include <cstring>
using namespace std;

void Admin::AddAdminDetails(int pID, const char pEmail[], const char pUsername[], const char pPassword[])
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